#include "BGUPerformerActorCS.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_AudioEditComp.h"
#include "BUS_CharacterModularComp.h"
#include "BUS_GuidComp.h"
#include "BUS_PerformerDataComp.h"
#include "BUS_SeqPerformerConfigInfoComp.h"

ABGUPerformerActorCS::ABGUPerformerActorCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_PerformerDataComp>(TEXT("PerformerDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->GuidComp = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    this->ActorConfigInfoComp = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->AudioEditComp = CreateDefaultSubobject<UBUS_AudioEditComp>(TEXT("AudioEditComp"));
    this->CharacterModularComp = CreateDefaultSubobject<UBUS_CharacterModularComp>(TEXT("CharacterModularComp"));
    this->ConfigInfoComp = CreateDefaultSubobject<UBUS_SeqPerformerConfigInfoComp>(TEXT("ConfigInfoComp"));
    this->bPlayerPerformer = false;
    this->bSupportAIConversation = false;
}

void ABGUPerformerActorCS::EquipFinish_Implementation(int32 EquipID) {
}

void ABGUPerformerActorCS::BeginPlayCS_Implementation() {
}

bool ABGUPerformerActorCS::GetActorGuidCS_Implementation(FString& OutActorGuid) const {
    return false;
}

void ABGUPerformerActorCS::OnConstructionCS_Implementation(const FTransform& Transform) {
}

void ABGUPerformerActorCS::PostInitializeComponentsCS_Implementation() {
}


