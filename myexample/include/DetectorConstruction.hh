#ifndef MYEXAMPLEPrimaryGeneratorAction_h
#define MYEXAMPLEPrimaryGeneratorAction_h 1
#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4VPhysicaliVolume;
class G4LogicalVolume;

namespace myexample
{

class DetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    DetectorConstruction() = default;
    ~DetectorConstruction() override = default;
  public:
    G4VPhysicalVolume* Construct() override;
    G4LogicalVolume* GetScoringVolume1() const { return fScoringVolume1; }
    G4LogicalVolume* GetScoringVolume2() const { return fScoringVolume2; }
    G4LogicalVolume* GetScoringVolume3() const { return fScoringVolume3; }
    G4LogicalVolume* GetScoringVolume4() const { return fScoringVolume4; }
    G4LogicalVolume* GetScoringVolume5() const { return fScoringVolume5; }
    G4LogicalVolume* GetScoringVolume6() const { return fScoringVolume6; }
  protected:
    G4LogicalVolume* fScoringVolume1 = nullptr;
    G4LogicalVolume* fScoringVolume2 = nullptr;
    G4LogicalVolume* fScoringVolume3 = nullptr;
    G4LogicalVolume* fScoringVolume4 = nullptr;
    G4LogicalVolume* fScoringVolume5 = nullptr;
    G4LogicalVolume* fScoringVolume6 = nullptr;
    G4double energyFace1 = 0;
    G4double energyFace2 = 0;
    G4double energyFace3 = 0;
    G4double energyFace4 = 0;
    G4double energyFace5 = 0;
    G4double energyFace6 = 0;
    G4LogicalVolume* EVolume = nullptr;
};
}

#endif
