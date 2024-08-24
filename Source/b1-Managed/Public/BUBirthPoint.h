#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGUBirthPoint.h"
#include "BUBirthPoint.generated.h"

UCLASS(Blueprintable)
class ABUBirthPoint : public ABGUBirthPoint {
    GENERATED_BODY()
public:
    ABUBirthPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

