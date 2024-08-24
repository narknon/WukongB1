#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestTimerFuncBinder.generated.h"

UCLASS(Blueprintable)
class UQuestTimerFuncBinder : public UObject {
    GENERATED_BODY()
public:
    UQuestTimerFuncBinder();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStep();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletion();
    
};

