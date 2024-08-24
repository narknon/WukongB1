#include "BGUNeutralAnimalSpawnArea.h"
#include "BUS_NeutralAnimalAreaConfigInfoComp.h"
#include "BUS_NeutralAnimalSpawnAreaDataComp.h"

ABGUNeutralAnimalSpawnArea::ABGUNeutralAnimalSpawnArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_NeutralAnimalSpawnAreaDataComp>(TEXT("DataComp"))) {
    this->NeutralAnimalAreaConfigInfoComp = CreateDefaultSubobject<UBUS_NeutralAnimalAreaConfigInfoComp>(TEXT("NeutralAnimalAreaConfigInfoComp"));
    this->PreviewActor = NULL;
    this->PresetPoints_EQS = NULL;
}

void ABGUNeutralAnimalSpawnArea::ReceiveDestroyed_Implementation() {
}


