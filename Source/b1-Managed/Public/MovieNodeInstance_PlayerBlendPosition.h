#pragma once
#include "CoreMinimal.h"
#include "MovieNodeInstance.h"
#include "MovieNodeInstance_PlayerBlendPosition.generated.h"

UCLASS(Blueprintable)
class UMovieNodeInstance_PlayerBlendPosition : public UMovieNodeInstance {
    GENERATED_BODY()
public:
    UMovieNodeInstance_PlayerBlendPosition();

private:
    UFUNCTION(BlueprintCallable)
    void OnBlendPositionTimeout();
    
};

