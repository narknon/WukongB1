#include "BGUFunctionLibAK.h"

UBGUFunctionLibAK::UBGUFunctionLibAK() {
}

void UBGUFunctionLibAK::UnLoadBank(const FString& BankName) {
}

void UBGUFunctionLibAK::SetUnrealGlobalSwitch(FName SwitchGroup, FName SwitchState) {
}

EAkResult UBGUFunctionLibAK::SeekOnEvent(const FString& InEventName, UAkComponent* InComponent, float InPercent, bool bInSeekToNearestMarker, int32 InPlayingID) {
    return EAkResult::NotImplemented;
}

int32 UBGUFunctionLibAK::PostAkEventOnDummyActor(const FString& EventName, UAkAudioEvent* Event) {
    return 0;
}

void UBGUFunctionLibAK::LoadBank(const FString& BankName) {
}

int32 UBGUFunctionLibAK::GetSourcePlayPosition(int32 PlayingID) {
    return 0;
}

void UBGUFunctionLibAK::ExecuteActionOnPlayingID(int32 ActionType, int32 PlayingID, int32 FadeOutTimeMs, int32 FadeOutCurveType) {
}

void UBGUFunctionLibAK::BGUAKStopPlayingID(int32 PlayingID, int32 FadeOutTimeMs, int32 FadeOutCurveType) {
}

void UBGUFunctionLibAK::AkEventPinInGarbageCollector(UAkAudioEvent* Event, int32 PlayingID) {
}


