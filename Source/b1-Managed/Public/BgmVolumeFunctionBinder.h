#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "BgmVolumeFunctionBinder.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBgmVolumeFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UBgmVolumeFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlapActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(AActor* OverlapActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

