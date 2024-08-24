#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "BUAnimHumanoidCS_LinkedInstanceBase.h"
#include "BUAnimHumanoidCS_AnimCurveBodySeparation.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UBUAnimHumanoidCS_AnimCurveBodySeparation : public UBUAnimHumanoidCS_LinkedInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_Leg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_Pelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_Spine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_ArmL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_ArmR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_ArmL_LocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendWeight_ArmR_LocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodySeparationBlendAlpha;
    
    UBUAnimHumanoidCS_AnimCurveBodySeparation();

private:
    UFUNCTION(BlueprintCallable)
    void InitBodySeparationBlend(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBodySeparationBlend(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
};

