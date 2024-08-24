#pragma once
#include "CoreMinimal.h"
#include "BUAnimHumanoidCS_LinkedInstanceBase.h"
#include "BUAnimHumanoidCS_AnimCurveBodyBlend.generated.h"

class UAnimSequenceBase;

UCLASS(Abstract, Blueprintable, NonTransient)
class UBUAnimHumanoidCS_AnimCurveBodyBlend : public UBUAnimHumanoidCS_LinkedInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ASCurveBodyBlendUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveBodyBlendUpperBodyWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ASCurveBodyBlendLeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveBodyBlendLeftArmWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ASCurveBodyBlendRightArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveBodyBlendRightArmWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ASCurveBodyBlendLeftLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveBodyBlendLeftLegWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ASCurveBodyBlendRightLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveBodyBlendRightLegWeight;
    
    UBUAnimHumanoidCS_AnimCurveBodyBlend();

};

