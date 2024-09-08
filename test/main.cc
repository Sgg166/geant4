#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"
#include "QGSP_BERT.hh"

int main(int argc, char** argv) {
    G4RunManager* runManager = new G4RunManager();

    // 设置探测器构造
    runManager->SetUserInitialization(new MyDetectorConstruction());

    // 设置物理列表
    runManager->SetUserInitialization(new QGSP_BERT());

    // 设置粒子生成器
    runManager->SetUserAction(new MyPrimaryGeneratorAction());

    // 设置步进动作
    MySteppingAction* steppingAction = new MySteppingAction();
    runManager->SetUserAction(steppingAction);

    // 初始化 G4 内核
    runManager->Initialize();

    // 如果启用可视化
    G4VisManager* visManager = new G4VisExecutive();
    visManager->Initialize();

    // 运行模拟
    G4UImanager* UImanager = G4UImanager::GetUIpointer();
    UImanager->ApplyCommand("/run/beamOn 1000"); // 发射1000个粒子

    // 输出结果
    G4cout << "Number of particles passed through the detector: " << steppingAction->GetCounter() << G4endl;

    // 清理
    delete visManager;
    delete runManager;

    return 0;
}

