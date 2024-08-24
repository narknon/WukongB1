#include "BGUWanderBGMArea.h"
#include "BUS_BGMAreaDataComp.h"
#include "BUS_WanderBGMAreaConfigComp.h"

ABGUWanderBGMArea::ABGUWanderBGMArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_BGMAreaDataComp>(TEXT("BGMAreaDataComp"))) {
    this->WanderBGMAreaConfigComp = CreateDefaultSubobject<UBUS_WanderBGMAreaConfigComp>(TEXT("WanderBGMAreaConfigComp"));
}


