#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUBounceCheckObject.generated.h"

class UProjectileMovementComponent;

UCLASS(Blueprintable)
class B1_API UBGUBounceCheckObject : public UObject {
    GENERATED_BODY()
public:
    UBGUBounceCheckObject();

    UFUNCTION(BlueprintCallable)
    void OnBounceCheck(const FHitResult& Hit, const FVector& OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BindBounceEvent(UProjectileMovementComponent* ProjectileMovementComp);
    
};

