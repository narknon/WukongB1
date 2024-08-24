#include "BGUGroupAIArea.h"
#include "BUS_GroupAIAreaConfigInfoComp.h"
#include "BUS_GroupAIDataComp.h"

ABGUGroupAIArea::ABGUGroupAIArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_GroupAIDataComp>(TEXT("DataComp"))) {
    this->GroupAIAreaConfigInfoComp = CreateDefaultSubobject<UBUS_GroupAIAreaConfigInfoComp>(TEXT("GroupAIAreaConfigInfoComp"));
}


