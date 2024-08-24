#include "BGUForceFightController.h"
#include "Components/SceneComponent.h"
#include "BUS_ForceFightControllerConfigComp.h"
#include "BUS_ForceFightControllerDataComp.h"

ABGUForceFightController::ABGUForceFightController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_ForceFightControllerDataComp>(TEXT("DataComp"))) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
    this->ForceFightControllerConfigComp = CreateDefaultSubobject<UBUS_ForceFightControllerConfigComp>(TEXT("ForceFightControllerConfigComp"));
}


