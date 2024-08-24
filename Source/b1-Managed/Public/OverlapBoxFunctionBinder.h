#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OverlapBoxFunctionBinder.generated.h"

class AActor;

UCLASS(Blueprintable)
class UOverlapBoxFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UOverlapBoxFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(AActor* OverlappedActor, AActor* OtherActor);
    
};

