#include "BGUTaskStageCollectionBase.h"
#include "BUS_TaskCollectiontDataComp.h"
#include "BUS_TaskStageCollectionConfigComp.h"

ABGUTaskStageCollectionBase::ABGUTaskStageCollectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_TaskCollectiontDataComp>(TEXT("CollectiontTaskDataComp"))) {
    this->TaskStageCollectionConfigComp = CreateDefaultSubobject<UBUS_TaskStageCollectionConfigComp>(TEXT("TaskStageCollectionConfigComp"));
}


