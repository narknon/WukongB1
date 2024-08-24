#pragma once
#include "CoreMinimal.h"
#include "BUAnimInstanceBase.h"
#include "EABPMoveMode.h"
#include "BUAnimQuadruped.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UBUAnimQuadruped : public UBUAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EABPMoveMode FinalABPMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuadrupedIKAlpha;
    
    UBUAnimQuadruped();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    
};

