#ifndef examplePrimaryGeneratorAction_h
#define examplePrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "globals.hh"

class G4ParticleGun;
class G4Event;

namespace myexample1
{
  class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
  public:
    PrimaryGeneratorAction();
    ~PrimaryGeneratorAction() override;

    void GeneratePrimaries(G4Event* ) override;

    G4ParticleGun* GetParticleGun() {return fParticleGun;}

    // Set methods
   // void SetRandomFlag(G4bool );

  private:
    G4ParticleGun* fParticleGun = nullptr; // G4 particle gun
};

}

#endif
