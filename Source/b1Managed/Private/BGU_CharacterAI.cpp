#include "BGU_CharacterAI.h"
#include "BUS_ConfigInfoComp.h"
#include "BUS_ExtendConfigComp.h"
#include "BUS_GuidComp.h"

ABGU_CharacterAI::ABGU_CharacterAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuidComp = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    this->ConfigInfoComp = CreateDefaultSubobject<UBUS_ConfigInfoComp>(TEXT("ConfigInfoComp"));
    this->ExtendConfigComp = CreateDefaultSubobject<UBUS_ExtendConfigComp>(TEXT("ExtendConfigComp"));
}

void ABGU_CharacterAI::OnRep_PlayerStateCS_Implementation() {
}


