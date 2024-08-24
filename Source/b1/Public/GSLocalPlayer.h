#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GSLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class B1_API UGSLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UGSLocalPlayer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetGameLoginOptionsCS() const;
    
};

