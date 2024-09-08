#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"
#include "G4Gamma.hh"

class MyPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
    MyPrimaryGeneratorAction() {
        fParticleGun = new G4ParticleGun(1);
        
        // 设置粒子类型
        G4ParticleDefinition* particle = G4ParticleTable::GetParticleTable()->FindParticle("gamma");
        fParticleGun->SetParticleDefinition(particle);
        fParticleGun->SetParticleEnergy(1*MeV);
        fParticleGun->SetParticlePosition(G4ThreeVector(0, 0, -50*cm));
        fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0, 0, 1));
    }

    ~MyPrimaryGeneratorAction() {
        delete fParticleGun;
    }

    void GeneratePrimaries(G4Event* anEvent) override {
        fParticleGun->GeneratePrimaryVertex(anEvent);
    }

private:
    G4ParticleGun* fParticleGun;
};

