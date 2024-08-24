#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SplineFlyMoveTriggerCompFunctionBinder.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class USplineFlyMoveTriggerCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    USplineFlyMoveTriggerCompFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

