#include "DetectorConstruction.hh"
#include "G4Colour.hh"
#include "G4RunManager.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4Cons.hh"
#include "G4Orb.hh"
#include "G4Sphere.hh"
#include "G4Trd.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"
#include "G4VisAttributes.hh"
namespace myexample
{
  G4VPhysicalVolume* DetectorConstruction::Construct()
{
  // Get nist material manager
  G4NistManager* nist = G4NistManager::Instance();

  // Envelope parameters
  //
  G4double env_sizeXY = 20*cm, env_sizeZ = 30*cm;
  G4Material* env_mat = nist->FindOrBuildMaterial("G4_Galactic");

  // Option to switch on/off checking of volumes overlaps
  //
  G4bool checkOverlaps = true;
  // World
  //
  G4double world_sizeXY = 1.2*env_sizeXY;
  G4double world_sizeZ  = 1.2*env_sizeZ;
  G4Material* world_mat = nist->FindOrBuildMaterial("G4_AIR");

  auto solidWorld = new G4Box("World",                           // its name
    0.5 * world_sizeXY, 0.5 * world_sizeXY, 0.5 * world_sizeZ);  // its size

  auto logicWorld = new G4LogicalVolume(solidWorld,  // its solid
    world_mat,                                       // its material
    "World");                                        // its name

  auto physWorld = new G4PVPlacement(nullptr,  // no rotation
    G4ThreeVector(),                           // at (0,0,0)
    logicWorld,                                // its logical volume
    "World",                                   // its name
    nullptr,                                   // its mother  volume
    false,                                     // no boolean operation
    0,                                         // copy number
    checkOverlaps);                            // overlaps checking
  // Envelope
  //
  auto solidEnv = new G4Box("Envelope",                    // its name
    0.5 * env_sizeXY, 0.5 * env_sizeXY, 0.5 * env_sizeZ);  // its size

  auto logicEnv = new G4LogicalVolume(solidEnv,  // its solid
    env_mat,                                     // its material
    "Envelope");                                 // its name

  new G4PVPlacement(nullptr,  // no rotation
    G4ThreeVector(),          // at (0,0,0)
    logicEnv,                 // its logical volume
    "Envelope",               // its name
    logicWorld,               // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 1
  //
  G4Material* shape1_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos1 = G4ThreeVector(0,0,4*cm);
  auto solidShape1 =  new G4Box("Shape1",
              4*cm, 6*cm, 0.3*cm);  // its size
  auto logicShape1 = new G4LogicalVolume(solidShape1,  // its solid
    shape1_mat,                                        // its material
    "Shape1");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos1,                     // at position
    logicShape1,              // its logical volume
    "Shape1",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 2
  //
  G4Material* shape2_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos2 = G4ThreeVector(0,0,-4*cm);
  auto solidShape2 =  new G4Box("Shape2",
              4*cm, 6*cm, 0.3*cm);  // its size
  auto logicShape2 = new G4LogicalVolume(solidShape2,  // its solid
    shape2_mat,                                        // its material
    "Shape2");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos2,                     // at position
    logicShape2,              // its logical volume
    "Shape2",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 3
  //
  G4Material* shape3_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos3 = G4ThreeVector(0,6*cm,0);
  auto solidShape3 =  new G4Box("Shape3",
              4*cm, 0.3*cm, 4*cm);  // its size
  auto logicShape3 = new G4LogicalVolume(solidShape3,  // its solid
    shape3_mat,                                        // its material
    "Shape3");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos3,                     // at position
    logicShape3,              // its logical volume
    "Shape3",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 4
  //
  G4Material* shape4_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos4 = G4ThreeVector(0,-6*cm,0);
  auto solidShape4 =  new G4Box("Shape4",
              4*cm, 0.3*cm, 4*cm);  // its size
  auto logicShape4 = new G4LogicalVolume(solidShape4,  // its solid
    shape4_mat,                                        // its material
    "Shape4");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos4,                     // at position
    logicShape4,              // its logical volume
    "Shape4",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 5
  //
  G4Material* shape5_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos5 = G4ThreeVector(4*cm,0,0);
  auto solidShape5 =  new G4Box("Shape5",
              0.3*cm, 6*cm, 4*cm);  // its size
  auto logicShape5 = new G4LogicalVolume(solidShape5,  // its solid
    shape5_mat,                                        // its material
    "Shape5");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos5,                     // at position
    logicShape5,              // its logical volume
    "Shape5",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
  // Shape 6
  //
  G4Material* shape6_mat = nist->FindOrBuildMaterial("G4_Cu");
  G4ThreeVector pos6 = G4ThreeVector(-4*cm,0,0);
  auto solidShape6 =  new G4Box("Shape6",
              0.3*cm, 6*cm, 4*cm);  // its size
  auto logicShape6 = new G4LogicalVolume(solidShape6,  // its solid
    shape6_mat,                                        // its material
    "Shape6");                                         // its name

  new G4PVPlacement(nullptr,  // no rotation
    pos6,                     // at position
    logicShape6,              // its logical volume
    "Shape6",                 // its name
    logicEnv,                 // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking
 


  auto worldVisAtt = new G4VisAttributes(G4Colour(1.0, 1.0, 1.0));
   auto envVisAtt = new G4VisAttributes(G4Colour(1.0, 1.0, 0));
   auto shapeVisAtt = new G4VisAttributes(G4Colour(1.0, 0, 1.0));
   logicWorld ->SetVisAttributes(worldVisAtt);
   logicEnv   ->SetVisAttributes(envVisAtt);
   logicShape1->SetVisAttributes(shapeVisAtt);
   logicShape2->SetVisAttributes(shapeVisAtt);
   logicShape3->SetVisAttributes(shapeVisAtt);
   logicShape4->SetVisAttributes(shapeVisAtt);
   logicShape5->SetVisAttributes(shapeVisAtt);
   logicShape6->SetVisAttributes(shapeVisAtt);
 fScoringVolume1 = logicShape1;
 fScoringVolume2 = logicShape2;
 fScoringVolume3 = logicShape3;
 fScoringVolume4 = logicShape4;
 fScoringVolume5 = logicShape5;
 fScoringVolume6 = logicShape6;
 EVolume=logicEnv;
 return physWorld;
}
}



















  // Visualization attributes
 /*  auto worldVisAtt = new G4VisAttributes(G4Colour(1.0, 1.0, 1.0));
   auto envVisAtt = new G4VisAttributes(G4Colour(1.0, 1.0, 0));
   auto shapeVisAtt = new G4VisAttributes(G4Colour(1.0, 0, 1.0));
   logicWorld ->SetVisAttributes(worldVisAtt);
   logicEnv   ->SetVisAttributes(envVisAtt);
   logicShape1->SetVisAttributes(shapeVisAtt);
   logicShape2->SetVisAttributes(shapeVisAtt);
   logicShape3->SetVisAttributes(shapeVisAtt);
   logicShape4->SetVisAttributes(shapeVisAtt);
   logicShape5->SetVisAttributes(shapeVisAtt);
   logicShape6->SetVisAttributes(shapeVisAtt);
  return physWorld;
}

void DetectorConstruction::ConstructSDandField()
{
  G4SDManager::GetSDMpointer()->SetVerboseLevel(1);

  // declare MyDetector  as a MultiFunctionalDetector scorer
  //
  auto sensitiveDetector = new G4MultiFunctionalDetector("MyDetector");
  G4SDManager::GetSDMpointer()->AddNewDetector(sensitiveDetector);
  G4VPrimitiveScorer* primitiv1 = new G4PSEnergyDeposit("edep1");
  sensitiveDetector->RegisterPrimitive(primitiv1);
  G4VPrimitiveScorer* primitiv2 = new G4PSEnergyDeposit("edep2");
  sensitiveDetector->RegisterPrimitive(primitiv2);
  G4VPrimitiveScorer* primitiv3 = new G4PSEnergyDeposit("edep3");
  sensitiveDetector->RegisterPrimitive(primitiv3);
  G4VPrimitiveScorer* primitiv4 = new G4PSEnergyDeposit("edep4");
  sensitiveDetector->RegisterPrimitive(primitiv4);
  G4VPrimitiveScorer* primitiv5 = new G4PSEnergyDeposit("edep5");
  sensitiveDetector->RegisterPrimitive(primitiv5);
  G4VPrimitiveScorer* primitiv6 = new G4PSEnergyDeposit("edep6");
  sensitiveDetector->RegisterPrimitive(primitiv6);
  SetSensitiveDetector("Shape1", sensitiveDetector);
  SetSensitiveDetector("Shape2", sensitiveDetector);
  SetSensitiveDetector("Shape3", sensitiveDetector);
  SetSensitiveDetector("Shape4", sensitiveDetector);
  SetSensitiveDetector("Shape5", sensitiveDetector);
  SetSensitiveDetector("Shape6", sensitiveDetector);

  G4ThreeVector fieldValue = G4ThreeVector();//初始情况下全局磁场是零
  fMagFieldMessenger = new G4GlobalMagFieldMessenger(fieldValue);
  fMagFieldMessenger->SetVerboseLevel(1);

  // Register the field messenger for deleting
  G4AutoDelete::Register(fMagFieldMessenger);

}
}*/


