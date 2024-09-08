#include "G4UserSteppingAction.hh"
#include "G4Step.hh"
#include "G4Track.hh"

class MySteppingAction : public G4UserSteppingAction {
public:
    MySteppingAction() : G4UserSteppingAction(), fCounter(0) {}
    virtual ~MySteppingAction() {}

    void UserSteppingAction(const G4Step* step) override {
        // 检查粒子是否从探测器中出射
        G4Track* track = step->GetTrack();
        if (track->GetVolume()->GetName() == "Detector") {
            if (track->GetNextVolume() == nullptr || track->GetNextVolume()->GetName() != "Detector") {
                fCounter++;
            }
        }
    }

    int GetCounter() const { return fCounter; }

private:
    int fCounter;  // 统计穿过探测器的粒子数
};

