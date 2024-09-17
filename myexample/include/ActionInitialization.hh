#ifndef MYEXAMPLEActionInitialization_h
#define MYEXAMPLEActionInitialization_h 1

#include "G4VUserActionInitialization.hh"

namespace myexample
{
class ActionInitialization : public G4VUserActionInitialization
{
  public:
    ActionInitialization() = default;
    ~ActionInitialization() override = default;

    void BuildForMaster() const override;
    void Build() const override;
};

}

#endif
