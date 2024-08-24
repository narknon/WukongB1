#pragma once
#include "CoreMinimal.h"
#include "GSLocalPlayer.h"
#include "GSLocalPlayerCS.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGSLocalPlayerCS : public UGSLocalPlayer {
    GENERATED_BODY()
public:
    UGSLocalPlayerCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetGameLoginOptionsCS() const;
    
};

