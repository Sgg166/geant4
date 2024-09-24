#ifndef MYEXAMPLE1TrackerHit_h
#define MYEXAMPLE1TrackerHit_h 1

#include "G4VHit.hh"
#include "G4THitsCollection.hh"
#include "G4Allocator.hh"
#include "G4ThreeVector.hh"
#include "tls.hh"
namespace myexample1
{
class TrackerHit : public G4VHit
{
  public:
    TrackerHit() = default;
    TrackerHit(const TrackerHit&) = default;
    ~TrackerHit() override = default;
    TrackerHit& operator=(const TrackerHit&) = default;
    G4bool operator==(const TrackerHit&) const;

    inline void* operator new(size_t);
    inline void  operator delete(void*);

    // methods from base class
   // void Draw() override;
    void Print() override;

    // Set methods
    void SetTrackID          (G4int track)           { fTrackID = track; };
    void SetLength           (G4double sLength)      {fsLength=sLength; };
    void Setdisplace         (G4ThreeVector displace){fdisplace=displace; };
    void Settof              ( G4double tof)          {ftof=tof;};
    void SetglobalTime       (G4double globalTime)   {fglobalTime=globalTime; };
    void SetEdep             (G4double de)           { fEdep = de; };
    void SetPos              (G4ThreeVector xyz)     { fPos = xyz; };
    void SettouchName        (G4String touchName)    { ftouchName=touchName; };
    void SetParticleName     (G4String particaleName) { fparticaleName=particaleName; };
    void SetPDGE             (G4int PDGE)            { fPDGE=PDGE; };
    void SetPostE            (G4double postE)        { fpostE=postE; };
    void SetkinEnergy        (G4double kinEnergy)    { fkinEnergy=kinEnergy; };
    void Setmomentum         (G4ThreeVector momentum){ fmomentum=momentum;};
    void SetprocessName      (G4String   processName){ fProcessName=processName; };
    // Get methods
    G4int GetTrackID() const           { return fTrackID; };
    G4double GetLength() const         { return fsLength; };
    G4ThreeVector Getdisplace() const  { return fdisplace; };
    G4double Gettof() const            { return ftof; };
    G4double GetglobalTime() const     { return fglobalTime; };
    G4double GetEdep() const           { return fEdep; };
    G4ThreeVector GetPos() const       { return fPos; };
    G4String   GettouchName()const     { return ftouchName; };
    G4String   GetParticaleName()const { return fparticaleName; };
    G4int      GetPDGE()const          { return fPDGE; };
    G4double   GetPostE()const         { return fpostE; };
    G4double   GetkinEnergy() const    { return fkinEnergy; };
    G4ThreeVector Getmomentum() const  { return fmomentum;};
    G4String   GetprocessName() const  { return fProcessName; };
private:
    G4int         fTrackID = -1;
    G4double      fsLength=0;
    G4ThreeVector fdisplace;
    G4double      ftof=0;
    G4double      fglobalTime=0;
    G4double      fEdep = 0.;
    G4ThreeVector fPos;
    G4String      ftouchName;
    G4String      fparticaleName;
    G4int         fPDGE;
    G4double      fpostE=0;
    G4double      fkinEnergy=0;
    G4ThreeVector fmomentum;
    G4String      fProcessName;

};
using TrackerHitsCollection = G4THitsCollection<TrackerHit>;
extern G4ThreadLocal G4Allocator<TrackerHit>* TrackerHitAllocator;

inline void* TrackerHit::operator new(size_t)
{
  if(!TrackerHitAllocator)
      TrackerHitAllocator = new G4Allocator<TrackerHit>;
  return (void *) TrackerHitAllocator->MallocSingle();
}

inline void TrackerHit::operator delete(void *hit)
{
  TrackerHitAllocator->FreeSingle((TrackerHit*) hit);
}
}
#endif
