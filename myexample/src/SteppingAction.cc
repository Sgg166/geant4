#include "SteppingAction.hh"
#include "EventAction.hh"
#include "DetectorConstruction.hh"
#include "G4Run.hh"
#include "G4Step.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"
namespace myexample
{
 SteppingAction::SteppingAction(EventAction* eventAction): fEventAction(eventAction){}
//auto eventAction = static_cast<EventAction*>(G4RunManager::GetRunManager()->GetUserEventAction());
 void SteppingAction::UserSteppingAction(const G4Step* step)
{
  G4LogicalVolume* volume=step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();
  G4double edep = step->GetTotalEnergyDeposit();
  if (volume->GetName() == "Shape1")
  {
  fEventAction->AddEdep1(edep);
  }
  else if (volume->GetName() == "Shape2")
  {
  fEventAction->AddEdep2(edep);
  }
  else if (volume->GetName() == "Shape3")
  {
   fEventAction-> AddEdep3(edep);
  }
  else if (volume->GetName() == "Shape4") 
  {
  fEventAction-> AddEdep4(edep);
  }
  else if (volume->GetName() == "Shape5") 
  {
  fEventAction->AddEdep5(edep);
  }
  else if (volume->GetName() == "Shape6")
  {
   fEventAction->AddEdep6(edep);
  }
}
}
