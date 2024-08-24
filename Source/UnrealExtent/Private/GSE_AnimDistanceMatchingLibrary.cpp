#include "GSE_AnimDistanceMatchingLibrary.h"

UGSE_AnimDistanceMatchingLibrary::UGSE_AnimDistanceMatchingLibrary() {
}

FSequenceEvaluatorReference UGSE_AnimDistanceMatchingLibrary::AdvanceTimeBySpeedMatching(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float SpeedToMatch, FVector2D PlayRateClamp) {
    return FSequenceEvaluatorReference{};
}

FSequenceEvaluatorReference UGSE_AnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatchToTarget(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName, FVector2D PlayRateClamp) {
    return FSequenceEvaluatorReference{};
}


