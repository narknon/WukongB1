#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkGameObjectDebugInfo.h"
#include "GSAkAudioLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class AKAUDIO_API UGSAkAudioLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSAkAudioLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void GetAkGameObjects(UObject* InWorldContext, float ShowDebugDurationTime);
    
    UFUNCTION(BlueprintCallable)
    static void GetActiveAkGameObjects(TArray<FAkGameObjectDebugInfo>& OutGameObjectInfos);
    
};

