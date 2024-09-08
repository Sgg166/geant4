//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
/// \file B1/src/SteppingAction.cc
/// \brief Implementation of the B1::SteppingAction class

#include "SteppingAction.hh"
#include "EventAction.hh"
#include "DetectorConstruction.hh"
#include "G4StepPoint.hh"
#include "G4Step.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"

namespace B1
{

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

SteppingAction::SteppingAction(EventAction* eventAction)
: fEventAction(eventAction)/*,fIncidentCount(0)*/{}

//SteppingAction::SteppingAction() : G4UserSteppingAction(), fIncidentCount(0) {}

//SteppingAction::~SteppingAction() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void SteppingAction::UserSteppingAction(const G4Step* step)
{
  //G4cout<<"1111111111111111"<<G4endl;
  //const G4Step* stepdo= step;
 // G4StepPoint* preStepPoint = step->GetPreStepPoint();
 // G4StepPoint* postStepPoint = step->GetPostStepPoint();
 //G4LogicalVolume* Volume
   // = stepdid->GetPreStepPoint()->GetTouchableHandle()
     // ->GetVolume()->GetLogicalVolume();
//  G4VPhysicalVolume* preVolume = preStepPoint->GetTouchableHandle()->GetVolume();
//  G4cout<<"preVolume: "<<&preVolume<<G4endl;
  //G4VPhysicalVolume* postVolume = postStepPoint->GetTouchableHandle()->GetVolume();
//  G4VPhysicalVolume* logicEnv = preStepPoint->GetTouchableHandle()->GetVolume();
  nowvolume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetName();
  if(lastvolume !="a")// postVolume && postVolume)
  {

   /* G4LogicalVolume* Volume
    = stepdid->GetPreStepPoint()->GetTouchableHandle()
      ->GetVolume()->GetLogicalVolume();
    G4LogicalVolume* nestVolume
    = step->GetPreStepPoint()->GetTouchableHandle()
      ->GetVolume()->GetLogicalVolume();
   */ //G4cout<<"1111111111111111"<<fScoringVolume<<" "<< step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetName()<<G4endl;

    G4cout<<"lastvolume: "<<lastvolume<<" nowvolume: "<<nowvolume<<G4endl;
    if(lastvolume== "Shape1" && nowvolume=="Envelope")
    {
      G4int eventID = (G4EventManager::GetEventManager())->GetConstCurrentEvent()->GetEventID();
      G4cout << ">>>>>>>>>>>>>> Event: " << eventID  << G4endl;
     // event++;
    }
  }
  lastvolume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetName();
  //const G4Step* stepdid=step;
   /* G4String postVolumeName = postVolume->GetName();
    if(postVolumeName == "Shape1")
    {
      fIncidentCount++;
    }
  }
  G4Track* track=step->GetTrack();
  G4StepPoint* PreStepPoint=step->GetPreStepPoint();
  G4StepPoint* PosStepPoint=step->GetPostStepPoint();
  G4String particleID=step->GetTrack()->GetParticleDefinition()->GetParticleName();
  G4cout<<"ParticleID: "<<particleID<<G4endl;
 // if (PreStepPoint->GetStepStatus() == fGeomBoundary )
    G4String particleID=step->GetTrack()->GetParticleDefinition()->GetParticleName();
    G4int eventID = (G4EventManager::GetEventManager())->GetConstCurrentEvent()->GetEventID();
    G4cout<<"ParticleID: "<<particleID<<G4endl;
    G4cout<<"eventID: "<<eventID<<G4endl;
    G4double xStep=step->GetPreStepPoint()->GetPosition().x();
    G4double yStep=step->GetPreStepPoint()->GetPosition().y();
    G4double zStep=step->GetPreStepPoint()->GetPosition().z();
    if(zStep>5.3)
    {
      G4cout<<"xStep: "<<xStep<< " " <<"yStep: "<<yStep<<" "<<"zStep: "<<zStep<<G4endl;
      G4double energy=step->GetTrack()->GetDynamicParticle()->GetKineticEnergy();
    }*/
  
  /* std::ofstream ofs;
   ofs.open("Step.txt",std::ios::app);
   ofs<<"ParticleID: "<<particleID<<"  "<<"eventID: "<<eventID<<std::endl;
   ofs.close();*/
 if (!fScoringVolume) {
    const auto detConstruction = static_cast<const DetectorConstruction*>(
      G4RunManager::GetRunManager()->GetUserDetectorConstruction());
    fScoringVolume = detConstruction->GetScoringVolume();
  }

  // get volume of the current step
  G4LogicalVolume* volume
    = step->GetPreStepPoint()->GetTouchableHandle()
      ->GetVolume()->GetLogicalVolume();

  // check if we are in scoring volume
  if (volume != fScoringVolume) return;

  // collect energy deposited in this step
  G4double edepStep = step->GetTotalEnergyDeposit();
  fEventAction->AddEdep(edepStep);
  //G4cout<<"fIncidentCount: "<<fIncidentCount<<G4endl;
}
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


