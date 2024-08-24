#include "BGUProceduralMapGenerator.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_ProceduralMapGeneratorDataComp.h"
#include "BUS_ProceduralMapGeneratorDataConfigComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUProceduralMapGenerator::ABGUProceduralMapGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_ProceduralMapGeneratorDataComp>(TEXT("ProceduralMapGeneratorDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->ProceduralMapDataConfigComp = CreateDefaultSubobject<UBUS_ProceduralMapGeneratorDataConfigComp>(TEXT("ProceduralMapGeneratorDataConfigComp"));
}

void ABGUProceduralMapGenerator::OnProceduralStreamLevelLoaded(int32 ID, int32 Linkage) {
}


