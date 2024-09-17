#include "RunAction.hh"
#include "PrimaryGeneratorAction.hh"
#include "DetectorConstruction.hh"
//#include "Run.hh"

#include "G4RunManager.hh"
#include "G4Run.hh"
#include "G4AccumulableManager.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
namespace myexample
{
RunAction::RunAction(){//}
//RunAction::RunAction(const G4Run*run )
//{
  G4AccumulableManager* accumulableManager = G4AccumulableManager::Instance();
  accumulableManager->RegisterAccumulable(fEdep1);
  accumulableManager->RegisterAccumulable(fEdep2);
  accumulableManager->RegisterAccumulable(fEdep3);
  accumulableManager->RegisterAccumulable(fEdep4);
  accumulableManager->RegisterAccumulable(fEdep5);
  accumulableManager->RegisterAccumulable(fEdep6);
}
void RunAction::BeginOfRunAction(const G4Run*run)
{
  G4RunManager::GetRunManager()->SetRandomNumberStore(false);
  G4AccumulableManager* accumulableManager = G4AccumulableManager::Instance();
  accumulableManager->Reset();
}
void RunAction::EndOfRunAction(const G4Run* run)
{
   G4int nofEvents = run->GetNumberOfEvent();
  if (nofEvents == 0) return;
   G4AccumulableManager* accumulableManager = G4AccumulableManager::Instance();
 // accumulableManager->Reset();  
  accumulableManager->Merge();
  G4double edep1  = fEdep1.GetValue();
  G4double edep2  = fEdep2.GetValue();
  G4double edep3  = fEdep3.GetValue();
  G4double edep4  = fEdep4.GetValue();
  G4double edep5  = fEdep5.GetValue();
  G4double edep6  = fEdep6.GetValue();
if (IsMaster()) {
G4cout << "Total energy on Face1: " <<G4BestUnit(edep1,"Energy")  << G4endl;
G4cout << "Total energy on Face2: " <<G4BestUnit(edep2,"Energy")  << G4endl;
G4cout << "Total energy on Face3: " <<G4BestUnit(edep3,"Energy")  << G4endl;
G4cout << "Total energy on Face4: " <<G4BestUnit(edep4,"Energy")  << G4endl;
G4cout << "Total energy on Face5: " <<G4BestUnit(edep5,"Energy")  << G4endl;
G4cout << "Total energy on Face6: " <<G4BestUnit(edep6,"Energy")  << G4endl;
}
}
void RunAction::AddEdep1(G4double edep1)
{
  fEdep1  += edep1;
}
void RunAction::AddEdep2(G4double edep2)
{
  fEdep2  += edep2;
}
void RunAction::AddEdep3(G4double edep3)
{
  fEdep3  += edep3;
}
void RunAction::AddEdep4(G4double edep4)
{
  fEdep4  += edep4;
}
void RunAction::AddEdep5(G4double edep5)
{
  fEdep5  += edep5;
}
void RunAction::AddEdep6(G4double edep6)
{
  fEdep6  += edep6;
}
}
