#ifndef MYEXAMPLERunAction_h
#define MYEXAMPLERunAction_h 1

#include "G4UserRunAction.hh"
#include "globals.hh"
#include "G4Accumulable.hh"
class G4Run;
class G4Event;
namespace myexample
{
class RunAction : public G4UserRunAction
{
  public:
    RunAction();
    RunAction(const G4Run*run );
    ~RunAction() override = default;

    void BeginOfRunAction(const G4Run*run ) override;
     void   EndOfRunAction(const G4Run*run) override;

    void AddEdep1 (G4double edep1);//{totalEnergyFace1 += edep1;}
    void AddEdep2 (G4double edep2);//{totalEnergyFace1 += edep2;}
    void AddEdep3 (G4double edep3);//{totalEnergyFace1 += edep3;}
    void AddEdep4 (G4double edep4);//{totalEnergyFace1 += edep4;}
    void AddEdep5 (G4double edep5);//{totalEnergyFace1 += edep5;}
    void AddEdep6 (G4double edep6);//{totalEnergyFace1 += edep6;}

  private:
   /* G4double totalEnergyFace1=0;
    G4double totalEnergyFace2=0;
    G4double totalEnergyFace3=0;
    G4double totalEnergyFace4=0;
    G4double totalEnergyFace5=0;
    G4double totalEnergyFace6=0;*/




    G4Accumulable<G4double> fEdep1 = 0.;
    G4Accumulable<G4double> fEdep2 = 0.;
    G4Accumulable<G4double> fEdep3 = 0.;
    G4Accumulable<G4double> fEdep4 = 0.;
    G4Accumulable<G4double> fEdep5 = 0.;
    G4Accumulable<G4double> fEdep6 = 0.;
};

}
 #endif
