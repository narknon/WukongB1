#include "BUS_AiWeakInteractComp.h"

UBUS_AiWeakInteractComp::UBUS_AiWeakInteractComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AiWeakInteractCheckType = AiWeakInteractCheckType::BothPlayerAndFollowPartner;
    this->InteractTriggerRadius = 0;
    this->InteractTriggerAngle = 0;
    this->AiConversationID = 0;
    this->EnableTaskStageCondition = false;
    this->TaskStageID = 0;
    this->TaskStageStatus = StageStatus::Default;
}


