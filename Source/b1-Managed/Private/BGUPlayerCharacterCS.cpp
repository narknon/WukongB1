#include "BGUPlayerCharacterCS.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "BUS_CharacterModularComp.h"
#include "BUS_ConfigInfoComp.h"
#include "BUS_ExtendConfigComp.h"
#include "BUS_ParkourMoveComp.h"
#include "BUS_PlayerDataComp.h"
#include "BUS_SpringArmComponent.h"

ABGUPlayerCharacterCS::ABGUPlayerCharacterCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_PlayerDataComp>(TEXT("UBGUDataComp"))) {
    this->CameraBoom1 = CreateDefaultSubobject<UBUS_SpringArmComponent>(TEXT("CameraBoom1"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->ApproachNotifyComp = CreateDefaultSubobject<USphereComponent>(TEXT("ApproachNotifyComp"));
    this->PlayerInputComponent = NULL;
    this->ParkourMoveComp = CreateDefaultSubobject<UBUS_ParkourMoveComp>(TEXT("ParkourMoveComp"));
    this->PlayerConfigInfoComp = CreateDefaultSubobject<UBUS_ConfigInfoComp>(TEXT("PlayerConfigInfoComp"));
    this->PlayerExtendConfigComp = CreateDefaultSubobject<UBUS_ExtendConfigComp>(TEXT("PlayerExtendConfigComp"));
    this->CharacterModularComp = CreateDefaultSubobject<UBUS_CharacterModularComp>(TEXT("CharacterModularComp"));
    this->ApproachNotifyComp->SetupAttachment(RootComponent);
    this->CameraBoom1->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(CameraBoom1);
}

void ABGUPlayerCharacterCS::OnPossessedCS_Implementation(AController* NewController) {
}

void ABGUPlayerCharacterCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGUPlayerCharacterCS::OnConstructionCS_Implementation(const FTransform& Transform) {
}

void ABGUPlayerCharacterCS::ReceiveBeginPlay_Implementation() {
}

bool ABGUPlayerCharacterCS::IsPlayerCharacterCS_Implementation() {
    return false;
}

void ABGUPlayerCharacterCS::OnRep_PlayerStateCS_Implementation() {
}

void ABGUPlayerCharacterCS::SetupPlayerInputComponentCS_Implementation(UInputComponent* NewPlayerInputComponent) {
}


