#include "AnimationAnalyzer.h"

UAnimationAnalyzer::UAnimationAnalyzer() {
    this->SelectedSkeleton = NULL;
    this->KDTreeNodeRootIndex = 0;
    this->bUseLMAnim = false;
    this->LastMatchedAnimIndex = -1;
    this->ControllerInputReactionSpeed = 1.00f;
    this->ControllerRotateReactionSpeed = 1.00f;
    this->bUsingAssetSoftRef = false;
}

bool UAnimationAnalyzer::TryInitFromAA(const UAnimationAnalyzer* OrgAA) {
    return false;
}

int32 UAnimationAnalyzer::StructureForAnimationCalculations(const float ControllerInputReactionSpeedCustom, const float ControllerRotateReactionSpeedCustom, const float VelocityStrength, const float AnimationMatchPower, const FInputPlayerDirectionData& InputDirection, const TArray<FSkeletonStructure>& AllAnimationReferences, const FVector& PresentVel, const float BlendTime, float& CalculatedResult, FMotionMatchingCostData& AnimCostData) {
    return 0;
}

void UAnimationAnalyzer::SetUseLMAnim(bool bUse) {
}


void UAnimationAnalyzer::RemoveAnimationReference(const int32 CurrentAnimationRef) {
}

void UAnimationAnalyzer::OnAnimationAssetLoadStatChange(const int32 Ref, EAnimSeqAssetLoadStatType Stat, UAnimSequence* Anim) {
}

void UAnimationAnalyzer::NewAnimationReference(const TArray<UAnimSequence*>& ProvidedAnimationsByUser) {
}


int32 UAnimationAnalyzer::MatchAnimationByKDTree(const float VelocityStrength, const FInputPlayerDirectionData& InputDirection, const TArray<FSkeletonStructure>& MotionJointData, const FVector& PresentVel, float& MinSquareDis) {
    return 0;
}

void UAnimationAnalyzer::LoadAllAnimSeqFromSoftRefForCalculatingInEditor() {
}

bool UAnimationAnalyzer::IsUseLMAnim() {
    return false;
}

bool UAnimationAnalyzer::IsBoneSelected(const FName& BoneName) const {
    return false;
}

bool UAnimationAnalyzer::IsAnimMathDataValid() {
    return false;
}

bool UAnimationAnalyzer::IsAnimationExtracted(const FName AnimationRef, const float WorldTime) {
    return false;
}

void UAnimationAnalyzer::InitAnimMathDataBySerializedFeatures() {
}

bool UAnimationAnalyzer::HasSequence(const FName SequenceName) {
    return false;
}

FSoftObjectPath UAnimationAnalyzer::GetSoftPathByIndex(const int32 Ref) {
    return FSoftObjectPath{};
}

FMotionMatchingMath UAnimationAnalyzer::GetSequenceTimeOfAnimations(const int32 CurrentAnimationKeyframe) const {
    return FMotionMatchingMath{};
}

FText UAnimationAnalyzer::GetAnimationShowNameInEditor(const int32 Ref) {
    return FText::GetEmpty();
}

int32 UAnimationAnalyzer::GetAnimationCount() {
    return 0;
}

USkeleton* UAnimationAnalyzer::GetAnimationAnalyzerSkeleton() {
    return NULL;
}

void UAnimationAnalyzer::GatherSkeletonInfo(USkeleton* UserSkeleton, const TArray<FName>& SelectedJoints, const TArray<float>& BoneWeights) {
}

FName UAnimationAnalyzer::FindUsersSkeletonBoneNames(int32 ReferencedBone) {
    return NAME_None;
}

int32 UAnimationAnalyzer::FindUserSelectedBones() {
    return 0;
}

UAnimSequence* UAnimationAnalyzer::FindAnimationsAtDesiredReferences(const int32 Ref) {
    return NULL;
}

UAnimSequence* UAnimationAnalyzer::FindAnimationFromSequence(const int32 CurrentAnimationRef) {
    return NULL;
}

int32 UAnimationAnalyzer::CountAnimationReferences() {
    return 0;
}

void UAnimationAnalyzer::ConstructSerializedFeatures() {
}

void UAnimationAnalyzer::ConstructAnimationReferences(const int32 FromSourceAnimation) {
}

void UAnimationAnalyzer::ConstructAllAnimationReferences() {
}

void UAnimationAnalyzer::ClearAllAnimSeqForCalculatingInEditor() {
}

void UAnimationAnalyzer::CleanAnimationReferences(const int32 CurrentReferenceAnimation) {
}

void UAnimationAnalyzer::CleanAllAnimationReferences() {
}

bool UAnimationAnalyzer::CheckIsFirstLoadRequireDesireAsset_Implementation(const int32 Ref) {
    return false;
}

bool UAnimationAnalyzer::AnimationReferenceIsValid(const int32 CurrentAnimationRef) {
    return false;
}

bool UAnimationAnalyzer::AnimationContextIsValid(const int32 CurrentAnimationRef) {
    return false;
}

bool UAnimationAnalyzer::AnimationCalculationsAccepted(const int32 Ref) {
    return false;
}

void UAnimationAnalyzer::AnalyzerAnimationReferences(const int32 CurrentReferenceAnimation) {
}


