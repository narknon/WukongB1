#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "QuestOverlapCompFunctionBinder.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UQuestOverlapCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UQuestOverlapCompFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

