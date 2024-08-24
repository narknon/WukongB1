#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OverlapCompFunctionBinder.generated.h"

class AActor;

UCLASS(Blueprintable)
class UOverlapCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UOverlapCompFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(AActor* OverlappedActor, AActor* OtherActor);
    
};

