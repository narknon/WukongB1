#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "FlowOverlapCompFunctionBinder.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFlowOverlapCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UFlowOverlapCompFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

