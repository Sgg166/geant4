#include "TrackerHit.hh"
#include "G4UnitsTable.hh"
#include "G4VVisManager.hh"
#include "G4Circle.hh"
#include "G4Colour.hh"
#include "G4VisAttributes.hh"

#include <iomanip>
namespace myexample1
{
  G4ThreadLocal G4Allocator<TrackerHit>* TrackerHitAllocator = nullptr;
  G4bool TrackerHit::operator==(const TrackerHit& right) const
{
  return ( this == &right ) ? true : false;
}
void TrackerHit::Print()
{
  G4cout
     << "  trackID: " << fTrackID <<" touchName: "<<ftouchName
     //<< "  fsLength: "<<G4BestUnit(fsLength,"Length")
    // <<"  fdisplace: "<<G4BestUnit(fdisplace,"Length") 
    // <<"  ftof: "<< G4BestUnit(ftof,"Time")
    // << "  fglobalTime: "<<G4BestUnit(fglobalTime,"Time")
     << "  Edep: "
     << std::setw(7) << G4BestUnit(fEdep,"Energy")
     << "  ParticleName: "<<fparticaleName
    // << "  PDGE: " <<fPDGE
    // << "  PostE: " << G4BestUnit(fpostE,"Energy")
    // << "  Position: "
    // << std::setw(7) << G4BestUnit( fPos,"Length")
     << "  processName: "<<fProcessName
    // << "  kinEnergy: "<<G4BestUnit(fkinEnergy ,"Energy")
    // << "  momentum:  "<<fmomentum
     << G4endl;
}
}


