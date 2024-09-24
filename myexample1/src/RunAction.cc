#include "RunAction.hh"
#include "G4UnitsTable.hh"
#include "G4Run.hh"
#include "G4RunManager.hh"
#include "G4AnalysisManager.hh"
#include "G4SystemOfUnits.hh"
namespace myexample1
{
  RunAction::RunAction()
{
  G4RunManager::GetRunManager()->SetPrintProgress(1000);
  auto analysisManager = G4AnalysisManager::Instance();
  analysisManager->SetVerboseLevel(1);
  analysisManager->CreateH1("Edep","Edep in step", 50, 0.,0.1 *MeV);
}
void RunAction::BeginOfRunAction(const G4Run*)
{
  G4RunManager::GetRunManager()->SetRandomNumberStore(false);
  auto analysisManager = G4AnalysisManager::Instance();
  G4String fileName = "edep.root";
  analysisManager->OpenFile(fileName);
  G4cout << "Using " << analysisManager->GetType() << G4endl;
}
void RunAction::EndOfRunAction(const G4Run* )
{
  auto analysisManager = G4AnalysisManager::Instance();
  analysisManager->Write();
  analysisManager->CloseFile();
}
}
