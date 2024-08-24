#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OverlapBoxBinder.generated.h"

class AActor;

UCLASS(Blueprintable)
class UOverlapBoxBinder : public UObject {
    GENERATED_BODY()
public:
    UOverlapBoxBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(AActor* OverlappedActor, AActor* OtherActor);
    
};

