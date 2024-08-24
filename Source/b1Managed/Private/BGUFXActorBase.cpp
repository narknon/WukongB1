#include "BGUFXActorBase.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_DestructibleConfigComp.h"
#include "BUS_FXActorBaseConfigComp.h"
#include "BUS_FXAudioEditComp.h"
#include "BUS_FXDataComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUFXActorBase::ABGUFXActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_FXDataComp>(TEXT("FXDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->Root = (USceneComponent*)RootComponent;
    this->FXActorBaseConfigComp = CreateDefaultSubobject<UBUS_FXActorBaseConfigComp>(TEXT("FXActorBaseConfigComp"));
    this->DestructibleConfigComp = CreateDefaultSubobject<UBUS_DestructibleConfigComp>(TEXT("DestructibleConfigComp"));
    this->FXAudioEditComp = CreateDefaultSubobject<UBUS_FXAudioEditComp>(TEXT("FXAudioEditComp"));
}

bool ABGUFXActorBase::IsDead() {
    return false;
}

void ABGUFXActorBase::OnHitDestructible_Implementation(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage) {
}

void ABGUFXActorBase::OnResetDestructible_Implementation(bool IsDestroyed) {
}

void ABGUFXActorBase::OnDestroyDestructible_Implementation(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage) {
}

void ABGUFXActorBase::SetFloatValueToMaterialAdvect_Implementation(FName ParamName, float FloatValue) {
}

void ABGUFXActorBase::ReceiveBeginPlay_Implementation() {
}


