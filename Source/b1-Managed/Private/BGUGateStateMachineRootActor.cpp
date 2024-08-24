#include "BGUGateStateMachineRootActor.h"
#include "Components/SceneComponent.h"

ABGUGateStateMachineRootActor::ABGUGateStateMachineRootActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp"));
    this->DefaultRootComp = (USceneComponent*)RootComponent;
}


