#pragma once
#include "CoreMinimal.h"
#include "EAkResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFunctionLibAK.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class B1_API UBGUFunctionLibAK : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibAK();

    UFUNCTION(BlueprintCallable)
    static void UnLoadBank(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void SetUnrealGlobalSwitch(FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    static EAkResult SeekOnEvent(const FString& InEventName, UAkComponent* InComponent, float InPercent, bool bInSeekToNearestMarker, int32 InPlayingID);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostAkEventOnDummyActor(const FString& EventName, UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBank(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSourcePlayPosition(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteActionOnPlayingID(int32 ActionType, int32 PlayingID, int32 FadeOutTimeMs, int32 FadeOutCurveType);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAKStopPlayingID(int32 PlayingID, int32 FadeOutTimeMs, int32 FadeOutCurveType);
    
    UFUNCTION(BlueprintCallable)
    static void AkEventPinInGarbageCollector(UAkAudioEvent* Event, int32 PlayingID);
    
};

