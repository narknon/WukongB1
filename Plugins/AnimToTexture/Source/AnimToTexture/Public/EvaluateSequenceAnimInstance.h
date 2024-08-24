#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EvaluateSequenceAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ANIMTOTEXTURE_API UEvaluateSequenceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* SequenceToEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeToEvaluate;
    
    UEvaluateSequenceAnimInstance();

};

