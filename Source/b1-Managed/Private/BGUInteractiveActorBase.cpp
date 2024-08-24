#include "BGUInteractiveActorBase.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "BGUDebugSectorComponent.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_InteractComp.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUInteractiveActorBase::ABGUInteractiveActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_InteractiveActorDataComp>(TEXT("InteractiveActorDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->DefaultRootComp = (USceneComponent*)RootComponent;
    this->InteractComp = CreateDefaultSubobject<UBUS_InteractComp>(TEXT("InteractSystem"));
    this->InteractRangeDebugComp = CreateDefaultSubobject<UBGUDebugSectorComponent>(TEXT("InteractRangeDebugComp"));
    this->InteractRangeDebugComp2 = CreateDefaultSubobject<UBGUDebugSectorComponent>(TEXT("InteractRangeDebugComp2"));
    this->InteractRangeDebugComp3 = CreateDefaultSubobject<UBGUDebugSectorComponent>(TEXT("InteractRangeDebugComp3"));
    this->InteractRangeDebugComp->SetupAttachment(RootComponent);
    this->InteractRangeDebugComp2->SetupAttachment(RootComponent);
    this->InteractRangeDebugComp3->SetupAttachment(RootComponent);
}

void ABGUInteractiveActorBase::CallBPFunc_Implementation() {
}

void ABGUInteractiveActorBase::OnHitDestructible_Implementation(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage) {
}

void ABGUInteractiveActorBase::OnResetDestructible_Implementation(bool IsDestroyed) {
}

void ABGUInteractiveActorBase::OnDestroyDestructible_Implementation(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage) {
}

void ABGUInteractiveActorBase::RefreshInteractDebugRange() {
}

void ABGUInteractiveActorBase::OnConstructionCS_Implementation(const FTransform& Transform) {
}


