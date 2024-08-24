#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGULevelStateFunctionBinder.generated.h"

UCLASS(Blueprintable)
class UBGULevelStateFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UBGULevelStateFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnSetLevelsStateFinished(const FString& LevelKeyword, const FString& LevelState, int32 OperationID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestUpdateLevelState();
    
};

