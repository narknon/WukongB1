#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "TriggerCompFunctionBinder.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTriggerCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UTriggerCompFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

