#include "BUS_LeavesSkillManageComp.h"

UBUS_LeavesSkillManageComp::UBUS_LeavesSkillManageComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FXTag = TEXT("SheLeavesSkillFX");
    this->PreStageTime = 0.00f;
    this->AbsorbStageTime = 3.00f;
    this->FlyStageMaxTime = 999.00f;
    this->ScatterStageTime = 1.00f;
}

void UBUS_LeavesSkillManageComp::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UBUS_LeavesSkillManageComp::BeginPlayInCS_Implementation() {
}

void UBUS_LeavesSkillManageComp::TickComponentInCS_Implementation(float DeltaTime) {
}


