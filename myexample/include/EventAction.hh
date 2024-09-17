#ifndef MYEXAMPLEEventAction_h
#define MYEXAMPLEEventAction_h 1

#include "G4UserEventAction.hh"

#include "globals.hh"

namespace myexample
{

/// Event action class
class RunAction;

class EventAction : public G4UserEventAction
{
  public:
    EventAction(RunAction* runAction);
    ~EventAction() override = default;

    void BeginOfEventAction(const G4Event* event) override;
    void EndOfEventAction(const G4Event* event) override;

    void AddEdep1(G4double edep) { fEdep1 += edep; }
    void AddEdep2(G4double edep) { fEdep2 += edep; }
    void AddEdep3(G4double edep) { fEdep3 += edep; }
    void AddEdep4(G4double edep) { fEdep4 += edep; }
    void AddEdep5(G4double edep) { fEdep5 += edep; }
    void AddEdep6(G4double edep) { fEdep6 += edep; }
  private:
    RunAction* fRunAction = nullptr;
    G4double   fEdep1 = 0.;
    G4double   fEdep2 = 0.;
    G4double   fEdep3 = 0.;
    G4double   fEdep4 = 0.;
    G4double   fEdep5 = 0.;
    G4double   fEdep6 = 0.;
};

}
#endif

