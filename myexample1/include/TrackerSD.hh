#ifndef MYEXAMPLE1TrackerSD_h
#define MYEXAMPLE1TrackerSD_h 1
#include "G4GeometryTolerance.hh"
#include "G4SystemOfUnits.hh"
#include "G4VSensitiveDetector.hh"
#include "G4Box.hh"
#include "TrackerHit.hh"
#include <vector>
#include <fstream>
class G4Step;
class G4HCofThisEvent;
namespace myexample1
{
  class TrackerSD : public G4VSensitiveDetector
{
  public:
    TrackerSD(const G4String& name,const G4String& hitsCollectionName);
    ~TrackerSD() override = default;

    // methods from base class
    void   Initialize(G4HCofThisEvent* hitCollection) override;
    G4bool ProcessHits(G4Step* step, G4TouchableHistory* history) override;
    void   EndOfEvent(G4HCofThisEvent* hitCollection) override;
    

  private:
    TrackerHitsCollection* fHitsCollection = nullptr;
    std::ofstream ofs; 
};
}
#endif
