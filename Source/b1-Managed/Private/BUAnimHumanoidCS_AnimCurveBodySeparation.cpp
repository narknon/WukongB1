#include "BUAnimHumanoidCS_AnimCurveBodySeparation.h"

UBUAnimHumanoidCS_AnimCurveBodySeparation::UBUAnimHumanoidCS_AnimCurveBodySeparation() {
    this->BodyBlendWeight_Leg = 0.00f;
    this->BodyBlendWeight_Pelvis = 0.00f;
    this->BodyBlendWeight_Spine = 0.00f;
    this->BodyBlendWeight_Head = 0.00f;
    this->BodyBlendWeight_ArmL = 0.00f;
    this->BodyBlendWeight_ArmR = 0.00f;
    this->BodyBlendWeight_ArmL_LocalSpace = 0.00f;
    this->BodyBlendWeight_ArmR_LocalSpace = 0.00f;
    this->BodySeparationBlendAlpha = 0.00f;
}

void UBUAnimHumanoidCS_AnimCurveBodySeparation::InitBodySeparationBlend(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AnimCurveBodySeparation::UpdateBodySeparationBlend(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}


