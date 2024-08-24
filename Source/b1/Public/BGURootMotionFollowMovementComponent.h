#pragma once
#include "CoreMinimal.h"
#include "BGUCharacterMovementComponent.h"
#include "BGURootMotionFollowMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGURootMotionFollowMovementComponent : public UBGUCharacterMovementComponent {
    GENERATED_BODY()
public:
    UBGURootMotionFollowMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UBGUCharacterMovementComponent* GetMasterMoveComp();
    
};

