#ifndef MYEXAMPLE1EventAction_h
#define MYEXAMPLE1EventAction_h 1

#include "G4UserEventAction.hh"
#include "TrackerHit.hh"
#include "globals.hh"

namespace myexample1
{

/// Event action class

class EventAction : public G4UserEventAction
{
  public:
    EventAction() = default;
    ~EventAction() override = default;

    void  BeginOfEventAction(const G4Event* ) override;
    void    EndOfEventAction(const G4Event* ) override;
    G4int fCollID_face1;
/*    G4int fCollID_face2;
    G4int fCollID_face3;
    G4int fCollID_face4;
    G4int fCollID_face5;
    G4int fCollID_face6;*/

  private:
    TrackerHitsCollection* fHitsCollection = nullptr;
};

}

#endif
