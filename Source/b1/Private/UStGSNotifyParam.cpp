#include "UStGSNotifyParam.h"

FUStGSNotifyParam::FUStGSNotifyParam() {
    this->World = NULL;
    this->Owner = NULL;
    this->CurInstanceID = 0;
    this->FromInstanceID = 0;
    this->UniqueId = 0;
    this->MeshComp = NULL;
    this->Animation = NULL;
    this->AnimNotifyEvent_LinkValue = 0.00f;
    this->NotifyBeginTime = 0.00f;
    this->NotifyEndTime = 0.00f;
}

