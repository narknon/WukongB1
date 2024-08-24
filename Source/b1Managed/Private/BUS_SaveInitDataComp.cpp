#include "BUS_SaveInitDataComp.h"

UBUS_SaveInitDataComp::UBUS_SaveInitDataComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveInitData = false;
    this->ActorResetType = EBGUResetType::None;
    this->PersistentDataDontResetOnNewGamePlus = false;
}


