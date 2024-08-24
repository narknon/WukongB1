#include "BUIgnoreSkillMappingArea.h"
#include "Components/SceneComponent.h"
#include "BUS_IgnoreSkillMappingAreaConfigComp.h"
#include "BUS_IgnoreSkillMappingAreaDataComp.h"

ABUIgnoreSkillMappingArea::ABUIgnoreSkillMappingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_IgnoreSkillMappingAreaDataComp>(TEXT("DataComp"))) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
    this->IgnoreSkillMappingAreaConfigComp = CreateDefaultSubobject<UBUS_IgnoreSkillMappingAreaConfigComp>(TEXT("IntervalTriggerAreaConfigComp"));
}


