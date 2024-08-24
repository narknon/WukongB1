#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "BUAnimShadowInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBUAnimShadowInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot Snapshot;
    
    UBUAnimShadowInstanceBase();

};

