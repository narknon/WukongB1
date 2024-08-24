#include "BGG_GameModeB1.h"
#include "ActorCompContainerCS.h"
#include "BGGGameStateB1.h"
#include "BGG_GameModeDataCompB1.h"

ABGG_GameModeB1::ABGG_GameModeB1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ABGGGameStateB1::StaticClass();
    this->DataComp = CreateDefaultSubobject<UBGG_GameModeDataCompB1>(TEXT("GameModeDataCompB1"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->DefaultPawnClassBeforeRoleData = NULL;
}

void ABGG_GameModeB1::PreLoginCS_Implementation(const FString& Options, const FString& LoginAddress, const FString& UniqueId, FString& ErrorMessage) {
}

void ABGG_GameModeB1::LoginOutCS_Implementation(AController* Exiting) {
}

void ABGG_GameModeB1::ReceiveTick_Implementation(float DeltaSeconds) {
}

void ABGG_GameModeB1::PostLoginCS_Implementation(APlayerController* NewPlayer) {
}

void ABGG_GameModeB1::BeginPlayCS_Implementation() {
}

void ABGG_GameModeB1::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGG_GameModeB1::HandleMatchIsWaitingToStartCS_Implementation() {
}

UClass* ABGG_GameModeB1::GetDefaultPawnClassForController_Implementation(AController* InController) {
    return NULL;
}


