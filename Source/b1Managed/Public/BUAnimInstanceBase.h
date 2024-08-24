#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BUAnimInstanceBase.generated.h"

class UBGWDataAsset_AbpHumanoidSetting;

UCLASS(Abstract, Blueprintable, NonTransient)
class UBUAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AbpHumanoidSetting* ABPSetting;
    
    UBUAnimInstanceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
};

