#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BUAnimHumanoidCS_LinkedInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBUAnimHumanoidCS_LinkedInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
    UBUAnimHumanoidCS_LinkedInstanceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    
};

