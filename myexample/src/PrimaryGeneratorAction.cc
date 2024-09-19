#include "PrimaryGeneratorAction.hh"
#include "G4GeneralParticleSource.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"
#include "G4RunManager.hh"
#include "G4Run.hh"
namespace myexample
{
  PrimaryGeneratorAction::PrimaryGeneratorAction()
{
  G4int n_particle = 1;
  fParticleGun  = new G4ParticleGun(n_particle);

  // default particle kinematic
  G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
  G4String particleName;
  G4ParticleDefinition* particle
    = particleTable->FindParticle(particleName="gamma");
  fParticleGun->SetParticleDefinition(particle);
 // fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0.,0.,1.));
  fParticleGun->SetParticleEnergy(1.*MeV);
}
PrimaryGeneratorAction::~PrimaryGeneratorAction()
{
  delete fParticleGun;
}
void PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
  const G4Run *nowrun=G4RunManager::GetRunManager()->GetCurrentRun();
  G4int runid=nowrun->GetRunID();
  G4int posx,posy,posz;
  posx=int(floor(runid/64));
  posy=int(floor((runid%64)/8));
  posz=int(floor((runid%64)%8));
  fParticleGun->SetParticlePosition(G4ThreeVector((posx-3.5)*3.2*mm,(posy-3.5)*3.2*mm,(posz-3.5)*3.2*mm));
  G4double rndmCosTheta,rndmTheta,rndmPhi,rndmLambda,px,py,pz,pol_x,pol_y,pol_z;
  rndmCosTheta = G4UniformRand()*2-1;
  rndmTheta = acos(rndmCosTheta);
  rndmTheta = acos(rndmCosTheta);
  rndmPhi = G4UniformRand()*(2*M_PI);
  rndmLambda = G4UniformRand()*(2*M_PI);
      // Momentum direction (random)
  px=sin(rndmTheta)*cos(rndmPhi);
  py=sin(rndmTheta)*sin(rndmPhi);
  pz=cos(rndmTheta); fParticleGun->SetParticleMomentumDirection(G4ThreeVector(px,py,pz));
  pol_x=cos(rndmLambda)*cos(rndmTheta)*cos(rndmPhi)-sin(rndmLambda)*sin(rndmPhi);
  pol_y=cos(rndmLambda)*cos(rndmTheta)*sin(rndmPhi)+ sin(rndmLambda)*cos(rndmPhi);
  pol_z= - cos(rndmLambda)*sin(rndmTheta);
  fParticleGun->SetParticlePolarization(G4ThreeVector(pol_x,pol_y,pol_z));
  fParticleGun->GeneratePrimaryVertex(anEvent);
}
}
