#include "BUTamerActor.h"
#include "ETamerType.h"
#include "BUS_CharacterModularComp.h"
#include "BUS_ConfigInfoComp.h"
#include "BUS_ExtendConfigComp.h"
#include "BUS_GuidComp.h"

ABUTamerActor::ABUTamerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TamerType = ETamerType::LevelLoaded;
    this->ConfigInfoComp = CreateDefaultSubobject<UBUS_ConfigInfoComp>(TEXT("ConfigInfoComp"));
    this->GuidComp = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    this->InteractRangeDebugComp = NULL;
    this->InteractRangeDebugComp2 = NULL;
    this->SightPerceptionDebugSector = NULL;
    this->HearingPerceptionDebugCircle = NULL;
    this->WakeUpRangeCylinder = NULL;
    this->ExtendConfigComp = CreateDefaultSubobject<UBUS_ExtendConfigComp>(TEXT("ExtendConfigComp"));
    this->CharacterModularComp = CreateDefaultSubobject<UBUS_CharacterModularComp>(TEXT("CharacterModularComp"));
    this->MonsterClassObj = NULL;
}

ABGUCharacterCS* ABUTamerActor::GetMonster() {
    return NULL;
}

void ABUTamerActor::CopyPropertiesFromUnit() {
}

void ABUTamerActor::BeginPlayCS_Implementation() {
}

void ABUTamerActor::CopyPropertiesFromUnitActor(ABGUCharacterCS* Unit) {
}

void ABUTamerActor::CopyPropertiesFromTamerActor(ABUTamerActor* TamerActor) {
}

bool ABUTamerActor::GetActorGuidCS_Implementation(FString& OutActorGuid) const {
    return false;
}

void ABUTamerActor::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABUTamerActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}

bool ABUTamerActor::GetHighLODMeshConfig_Implementation(FTamerHighLODRootMeshConfig& OutMeshConfig) {
    return false;
}


