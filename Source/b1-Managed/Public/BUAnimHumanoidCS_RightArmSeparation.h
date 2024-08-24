#pragma once
#include "CoreMinimal.h"
#include "BUAnimHumanoidCS_LinkedInstanceBase.h"
#include "BUAnimHumanoidCS_RightArmSeparation.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UBUAnimHumanoidCS_RightArmSeparation : public UBUAnimHumanoidCS_LinkedInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightArmBlendWeight;
    
    UBUAnimHumanoidCS_RightArmSeparation();

};

