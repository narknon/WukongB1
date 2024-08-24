#include "BUS_TaskStageCollectionConfigComp.h"

UBUS_TaskStageCollectionConfigComp::UBUS_TaskStageCollectionConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CD = 0;
    this->FinishCD = 0;
    this->TaskStageID = 0;
    this->TaskStageStage = TaskCollectionState::Default;
    this->CanDestoryTaskFinish = false;
    this->DropId = 0;
    this->CollectionDropTemplete = NULL;
    this->CollectionDropTemplete_TaskFinish = NULL;
    this->DestoryDelayTime = 0.00f;
    this->CacheDBC = NULL;
}


