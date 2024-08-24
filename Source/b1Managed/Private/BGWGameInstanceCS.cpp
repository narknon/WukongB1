#include "BGWGameInstanceCS.h"
#include "Templates/SubclassOf.h"

UBGWGameInstanceCS::UBGWGameInstanceCS() {
}

void UBGWGameInstanceCS::ReceiveTick_Implementation(float DeltaSeconds, int32 TickGroup) {
}

void UBGWGameInstanceCS::ReceiveInit_Implementation() {
}

void UBGWGameInstanceCS::ReceiveShutdown_Implementation() {
}

void UBGWGameInstanceCS::OnWorldChangedCS_Implementation(UWorld* OldWorld, UWorld* NewWorld) {
}

void UBGWGameInstanceCS::OnPostActorTickCS_Implementation(UWorld* World) {
}

void UBGWGameInstanceCS::OnWorldTickStartCS_Implementation(UWorld* World) {
}

void UBGWGameInstanceCS::StartGameInstanceForCS_Implementation(EStartGameInstanceTypeForCS StartType) {
}

TSubclassOf<UOnlineSession> UBGWGameInstanceCS::GetOnlineSessionClassCS_Implementation() {
    return NULL;
}

void UBGWGameInstanceCS::ReceiveTickEvenWhenPaused_Implementation(float DeltaSeconds, int32 TickGroup) {
}

void UBGWGameInstanceCS::OnGameModeMatchStateSetCS_Implementation(FName NewMatchState) {
}


