#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "SlowIKType.h"
#include "BUAnim_PostProcess_Wukong.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBUAnim_PostProcess_Wukong : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha_FBIK_StandBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowIK_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SlowIK_Enable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SlowIKType SlowIKType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LockTransform_Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Relative_l_in_r;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Relative_r_in_l;
    
    UBUAnim_PostProcess_Wukong();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
};

