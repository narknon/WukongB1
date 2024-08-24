#include "BUAllowUseSpecialItemArea.h"
#include "Components/SceneComponent.h"
#include "BUS_AllowUseSpecialItemAreaConfigComp.h"
#include "BUS_AllowUseSpecialItemAreaDataComp.h"

ABUAllowUseSpecialItemArea::ABUAllowUseSpecialItemArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_AllowUseSpecialItemAreaDataComp>(TEXT("DataComp"))) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
    this->AllowUseSpecialItemAreaConfigComp = CreateDefaultSubobject<UBUS_AllowUseSpecialItemAreaConfigComp>(TEXT("AllowUseSpecialItemConfigComp"));
}


