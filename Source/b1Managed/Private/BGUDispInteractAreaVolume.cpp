#include "BGUDispInteractAreaVolume.h"
#include "Components/BoxComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUDispInteractAreaVolume::ABGUDispInteractAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DispInteractAreaVolume"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_ActorBaseDataComp>(TEXT("DispInteractDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->DispInteractAreaVolume = (UBoxComponent*)RootComponent;
    this->LandscapeMaxHeight = 0.00f;
    this->Landscape = NULL;
    this->SimulationSize_cm = 2048.00f;
    this->InteractiveData_StorageSize_cm = 8192.00f;
    this->InteractDistLimitToDispActor = 5000.00f;
    this->NS_Landscape_Interactive_Particles = NULL;
    this->NS_Landscape_Interactive_Simulator = NULL;
    this->LS_HeightMap = NULL;
    this->LS_WeightMap = NULL;
    this->MinX = 0;
    this->MinY = 0;
    this->MaxX = 0;
    this->MaxY = 0;
}

void ABGUDispInteractAreaVolume::UpdateLandScapeInfo() {
}

void ABGUDispInteractAreaVolume::BeginPlayCS_Implementation() {
}


