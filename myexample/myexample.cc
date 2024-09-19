#include "DetectorConstruction.hh"
#include "ActionInitialization.hh"

#include "G4RunManagerFactory.hh"
#include "G4SteppingVerbose.hh"
#include "G4UImanager.hh"

#include "FTFP_BERT.hh"
#include "G4StepLimiterPhysics.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

#include "Randomize.hh"
#include "PrimaryGeneratorAction.hh"
//#include "SteppingAction.hh"

using namespace myexample;
int main(int argc,char** argv)
{
  G4UIExecutive* ui = nullptr;
  if ( argc == 1 ) { ui = new G4UIExecutive(argc, argv); }
  G4int precision = 4;
  G4SteppingVerbose::UseBestUnit(precision);
  auto* runManager =  G4RunManagerFactory::CreateRunManager(G4RunManagerType::Default);
  runManager->SetUserInitialization(new DetectorConstruction());

  G4VModularPhysicsList* physicsList = new  FTFP_BERT;
  physicsList->RegisterPhysics(new G4StepLimiterPhysics());
  runManager->SetUserInitialization(physicsList);

  // Set user action classes
  runManager->SetUserInitialization(new ActionInitialization());

  // Initialize visualization
  //
  G4VisManager* visManager = new G4VisExecutive;
  visManager->Initialize();

  // Get the pointer to the User Interface manager
  G4UImanager* UImanager = G4UImanager::GetUIpointer();
  if ( ! ui ) {
    // batch mode
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UImanager->ApplyCommand(command+fileName);
  }
  else {
    // interactive mode
    UImanager->ApplyCommand("/control/verbose 2");
//    UImanager->ApplyCommand("/control/saveHistory");
    UImanager->ApplyCommand("/run/verbose 2");
    UImanager->ApplyCommand("/run/numberOfThreads 1");
    UImanager->ApplyCommand("/run/initialize");
    UImanager->ApplyCommand("/vis/open OGL 600x600-0+0");
    UImanager->ApplyCommand("/vis/viewer/set/autoRefresh false");
    UImanager->ApplyCommand("/vis/verbose errors");
    UImanager->ApplyCommand("/vis/drawVolume");
    UImanager->ApplyCommand("/vis/viewer/set/viewpointThetaPhi 90. 180.");
    UImanager->ApplyCommand("/vis/viewer/zoom 1.4");
    UImanager->ApplyCommand("/vis/scene/add/trajectories smooth");
    UImanager->ApplyCommand("/vis/modeling/trajectories/create/drawByCharge");
    UImanager->ApplyCommand("/vis/modeling/trajectories/drawByCharge-0/default/setDrawStepPts true");
    UImanager->ApplyCommand("/vis/modeling/trajectories/drawByCharge-0/default/setStepPtsSize 2");
    UImanager->ApplyCommand("/vis/scene/add/hits");
    UImanager->ApplyCommand("/vis/scene/endOfEventAction accumulate");
    UImanager->ApplyCommand("/vis/viewer/set/autoRefresh true");
    UImanager->ApplyCommand("/vis/verbose warnings");
    ui->SessionStart();
    delete ui;
  }
  delete visManager;
  delete runManager;
}
