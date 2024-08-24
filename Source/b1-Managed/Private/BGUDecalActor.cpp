#include "BGUDecalActor.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "BUS_DecalConfigComp.h"
#include "BUS_DecalDataComp.h"

ABGUDecalActor::ABGUDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_DecalDataComp>(TEXT("DecalDataComp"))) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
    this->DecalConfigComp = CreateDefaultSubobject<UBUS_DecalConfigComp>(TEXT("DecalConfigComp"));
    this->DecalComp->SetupAttachment(RootComponent);
}


