#pragma once
#include "CoreMinimal.h"
#include "SequenceEvaluatorLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimExecutionContext.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_AnimDistanceMatchingLibrary.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_AnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_AnimDistanceMatchingLibrary();

    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference AdvanceTimeBySpeedMatching(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float SpeedToMatch, FVector2D PlayRateClamp);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference AdvanceTimeByDistanceMatchToTarget(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName, FVector2D PlayRateClamp);
    
};

