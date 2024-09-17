#ifndef MYEXAMPLESteppingAction_h
#define MYEXAMPLESteppingAction_h 1

#include "G4UserSteppingAction.hh"
#include "globals.hh"

class G4LogicalVolume;
namespace myexample
{

class EventAction;

class SteppingAction : public G4UserSteppingAction
{
  public:

    SteppingAction(EventAction* eventAction);
    ~SteppingAction()= default ;

    // method from the base class
    void UserSteppingAction(const G4Step*) override;
    /*void SetFaceVolumes(G4LogicalVolume* fScoringVolume1, G4LogicalVolume* fScoringVolume2,
                        G4LogicalVolume* fScoringVolume3, G4LogicalVolume* fScoringVolume4,
                        G4LogicalVolume* fScoringVolume5, G4LogicalVolume* fScoringVolume6);
*/
  private:
    EventAction* fEventAction = nullptr;
    G4LogicalVolume* fScoringVolume1 = nullptr;
    G4LogicalVolume* fScoringVolume2 = nullptr;
    G4LogicalVolume* fScoringVolume3 = nullptr;
    G4LogicalVolume* fScoringVolume4 = nullptr;
    G4LogicalVolume* fScoringVolume5 = nullptr;
    G4LogicalVolume* fScoringVolume6 = nullptr;
    /*G4double energyFace1;
    G4double energyFace2;
    G4double energyFace3;
    G4double energyFace4;
    G4double energyFace5;
    G4double energyFace6;*/
};

}
#endif
