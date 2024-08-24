#include "BGUSceneRotateTriggerArea.h"
#include "BUS_SceneRotateTriggerConfigComp.h"
#include "BUS_SceneRotateTriggerDataComp.h"

ABGUSceneRotateTriggerArea::ABGUSceneRotateTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_SceneRotateTriggerDataComp>(TEXT("SceneRotateTriggerDataComp"))) {
    this->SceneRotateTriggerConfigComp = CreateDefaultSubobject<UBUS_SceneRotateTriggerConfigComp>(TEXT("SceneRotateTriggerConfigComp"));
}


