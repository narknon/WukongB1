#include "BUAbnormalDispMuseum.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABUAbnormalDispMuseum::ABUAbnormalDispMuseum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_ActorBaseDataComp>(TEXT("DataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->Root = (USceneComponent*)RootComponent;
    this->ImmueStaticMesh = NULL;
    this->DebugNumerClass = NULL;
    this->RowIndex = 0;
    this->AttackerDispID = 0;
    this->AbnormalType = AbnormalStateType::None;
}

void ABUAbnormalDispMuseum::Preview() {
}

void ABUAbnormalDispMuseum::SpawnGrid() {
}

void ABUAbnormalDispMuseum::UpdateData() {
}

void ABUAbnormalDispMuseum::GenSKMuseumData() {
}

void ABUAbnormalDispMuseum::ReceiveTick_Implementation(float DeltaSeconds) {
}


