#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BUAnimEquipHeadPostProcess.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBUAnimEquipHeadPostProcess : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleBlendWight;
    
    UBUAnimEquipHeadPostProcess();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
};

