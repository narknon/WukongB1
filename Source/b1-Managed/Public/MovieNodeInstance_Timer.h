#pragma once
#include "CoreMinimal.h"
#include "MovieNodeInstance.h"
#include "MovieNodeInstance_Timer.generated.h"

UCLASS(Blueprintable)
class UMovieNodeInstance_Timer : public UMovieNodeInstance {
    GENERATED_BODY()
public:
    UMovieNodeInstance_Timer();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStep();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletion();
    
};

