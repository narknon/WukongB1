#include "BGUDroppableDestructionActorBase.h"
#include "BUS_DestructibleConfigComp.h"
#include "BUS_DroppableDestructionDataComp.h"
#include "BUS_FXAudioEditComp.h"

ABGUDroppableDestructionActorBase::ABGUDroppableDestructionActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_DroppableDestructionDataComp>(TEXT("DroppableDestructionDataComp"))) {
    this->DestructibleConfigComp = CreateDefaultSubobject<UBUS_DestructibleConfigComp>(TEXT("DestructibleConfigComp"));
    this->FXAudioEditComp = CreateDefaultSubobject<UBUS_FXAudioEditComp>(TEXT("FXAudioEditComp"));
}

void ABGUDroppableDestructionActorBase::SetFloatValueToMaterialAdvect_Implementation(FName ParamName, float FloatValue) {
}


