#ifndef MYEXAMPLE1RunAction_h
#define MYEXAMPLE1RunAction_h 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class G4Run;

namespace myexample1
{
class RunAction : public G4UserRunAction
{
  public:
    RunAction();
    ~RunAction() override = default;

    void BeginOfRunAction(const G4Run* run) override;
    void   EndOfRunAction(const G4Run* run) override;
};

}

#endif
