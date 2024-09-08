#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4RunManager.hh"
#include "G4Tubs.hh"
#include "G4VisAttributes.hh"
#include "G4Colour.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction {
public:
    G4VPhysicalVolume* Construct() override {
        // 使用 NIST 管理器获取材料
        G4NistManager* nist = G4NistManager::Instance();
        G4Material* worldMat = nist->FindOrBuildMaterial("G4_AIR");
        G4Material* detectorMat = nist->FindOrBuildMaterial("G4_Pb"); // 使用铅材料

        // 定义世界体积
        G4Box* solidWorld = new G4Box("World", 1.0*m, 1.0*m, 1.0*m);
        G4LogicalVolume* logicWorld = new G4LogicalVolume(solidWorld, worldMat, "World");
        G4VPhysicalVolume* physWorld = new G4PVPlacement(nullptr, G4ThreeVector(), logicWorld, "World", nullptr, false, 0);

        // 定义探测器
        G4Box* solidDetector = new G4Box("Detector", 10*cm, 10*cm, 1*cm);
        G4LogicalVolume* logicDetector = new G4LogicalVolume(solidDetector, detectorMat, "Detector");

        new G4PVPlacement(nullptr, G4ThreeVector(0, 0, 0), logicDetector, "Detector", logicWorld, false, 0);

        return physWorld;
    }
};

