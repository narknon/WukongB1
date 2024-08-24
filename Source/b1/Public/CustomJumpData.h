#pragma once
#include "CoreMinimal.h"
#include "CustomJumpData.generated.h"

USTRUCT(BlueprintType)
struct B1_API FCustomJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomJumpVelocityIncrement_Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastCustomJumpVelocityIncrement_Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta_VelocityZIncrement_CustomJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastVelocityZIncrement_CustomJump;
    
    FCustomJumpData();
};

