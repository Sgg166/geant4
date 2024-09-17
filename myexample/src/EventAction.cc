#include "EventAction.hh"
#include "RunAction.hh"
#include "G4SystemOfUnits.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
namespace myexample
{
EventAction::EventAction(RunAction* runAction)
: fRunAction(runAction)
{}

void EventAction::BeginOfEventAction(const G4Event*)
{
   fEdep1 = 0.;
   fEdep2 = 0.;
   fEdep3 = 0.;
   fEdep4 = 0.;
   fEdep5 = 0.;
   fEdep6 = 0.;
}

void EventAction::EndOfEventAction(const G4Event*)
{
  // accumulate statistics in run action
  fRunAction->AddEdep1(fEdep1);
  fRunAction->AddEdep2(fEdep2);
  fRunAction->AddEdep3(fEdep3);
  fRunAction->AddEdep4(fEdep4);
  fRunAction->AddEdep5(fEdep5);
  fRunAction->AddEdep6(fEdep6);
}
}
