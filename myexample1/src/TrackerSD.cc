#include "TrackerSD.hh"
#include "G4HCofThisEvent.hh"
#include "G4Step.hh"
#include "G4ThreeVector.hh"
#include "G4SDManager.hh"
#include "G4ios.hh"
#include "G4Box.hh"
#include "G4GeometryTolerance.hh"
#include "G4SystemOfUnits.hh"
#include "G4VProcess.hh"
#include "G4AnalysisManager.hh"
namespace myexample1
{
  TrackerSD::TrackerSD(const G4String& name,const G4String& hitsCollectionName)
 : G4VSensitiveDetector(name)
{
  collectionName.insert(hitsCollectionName);
}

void TrackerSD::Initialize(G4HCofThisEvent* hce)
{
  fHitsCollection  = new TrackerHitsCollection(SensitiveDetectorName, collectionName[0]);
  G4int hcID = G4SDManager::GetSDMpointer()->GetCollectionID(collectionName[0]);
  hce->AddHitsCollection( hcID, fHitsCollection );
}
G4bool TrackerSD::ProcessHits(G4Step* aStep, G4TouchableHistory*)
{
  G4double edep = aStep->GetTotalEnergyDeposit();
  auto analysisManager = G4AnalysisManager::Instance();         
  analysisManager->FillH1(0,edep);
 


  //G4double sLength=aStep->GetStepLength();
 // G4ThreeVector displace = aStep->GetDeltaPosition();
 // G4double tof = aStep->GetDeltaTime();
 // G4double globalTime = aStep->GetTrack()->GetGlobalTime();
 // ofs.open("EDEP.txt",std::ios::app);
 // ofs<<edep<<"  Mev"<<G4endl;//"  "<<sLength<<"um"<<G4endl;
 // ofs.close();
  G4LogicalVolume* volume=aStep->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();
  G4String touchName=aStep->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetName();
  G4String particaleName=aStep->GetTrack()->GetDefinition()->GetParticleName();
 // G4int PDGE =aStep->GetTrack()->GetDefinition()->GetPDGEncoding();
 // G4double postE =aStep->GetPostStepPoint()->GetKineticEnergy();
 // G4double kinEnergy=aStep->GetTrack()->GetKineticEnergy();
 // G4ThreeVector momentum = aStep->GetTrack()->GetMomentum();
 // G4cout << "x: "<<momentum.x()<<"y: "<<momentum.y()<<"z: "<<momentum.z()<<G4endl;
  if (edep==0.) return false;
  auto newHit = new TrackerHit();
  newHit->SetTrackID (aStep->GetTrack()->GetTrackID());
 // newHit->SetLength(sLength);
 // newHit->Setdisplace(displace);
 // newHit->Settof(tof);
 // newHit->SetglobalTime(globalTime);
  newHit->SetEdep(edep);
  newHit->SettouchName(touchName);
  newHit->SetParticleName(particaleName);
 // newHit->SetPDGE(PDGE);
 // newHit->SetPostE(postE);
 // newHit->SetPer (aStep->GetPreStepPoint()->GetPosition());
 // newHit->SetPos (aStep->GetPostStepPoint()->GetPosition());
  newHit->SetprocessName (aStep->GetPostStepPoint()->GetProcessDefinedStep()->GetProcessName());
 // newHit->SetkinEnergy(kinEnergy);
 // newHit->Setmomentum(momentum);
  fHitsCollection->insert( newHit );
 // newHit->Print();
  return true;
}

void TrackerSD::EndOfEvent(G4HCofThisEvent* )
{
  SetVerboseLevel(2);
  if (verboseLevel > 1)
  {
    std::size_t nofHits = fHitsCollection->entries();
    G4cout << G4endl << "-------->Hits Collection: in this event they are " << nofHits
           << " hits in the cube: " << G4endl;
    for (std::size_t i = 0; i < nofHits; i++)
      (*fHitsCollection)[i]->Print();
  }
}
}





