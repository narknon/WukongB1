#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamingCallbackHolder.generated.h"

UCLASS(Blueprintable)
class ULevelStreamingCallbackHolder : public UObject {
    GENERATED_BODY()
public:
    ULevelStreamingCallbackHolder();

    UFUNCTION(BlueprintCallable)
    void OnStreamingLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnStreamingLevelLoaded();
    
};

