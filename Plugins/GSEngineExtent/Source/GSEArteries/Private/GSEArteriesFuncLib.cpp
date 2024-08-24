#include "GSEArteriesFuncLib.h"

UGSEArteriesFuncLib::UGSEArteriesFuncLib() {
}

UArteriesObject* UGSEArteriesFuncLib::SmartResampleBySourceExtent(UArteriesObject* Target, TArray<FSoftObjectPath> InSources, const GSATERIES_SAMPLE_AXIS InAxis, float MinResampleLength, float MaxResampleLength, float ResampleScale) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::ScalizeGridPrimitive(UArteriesObject* Target, float UnitLength) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::ResizePrimitive2D(UArteriesObject* Target, const FString& InGroup, float Distance, bool bInwards) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::ResampleEachPrimsByLengths(UArteriesObject* Target, TArray<float> SegmentLengthSets, bool ByEdge, int32 NumSegments, EArteriesTangentOutputType OutputType) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::ResampleAsMidPoints(UArteriesObject* Target) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::RayCastDown(AArteriesActor* OwnerActor, UArteriesObject* BackBones, const FString& InGroup, FVector RayCastOffset, float RayCastDistance, float EndOffsetLength, bool bHitLandscapeOnly) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MergePointsToStaticSurface(AArteriesActor* OwnerActor, UArteriesObject* Target, const FString& InGroup, FVector RayCastOffset, float RayDistance) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MergePointsToPrimitive(UArteriesObject* Target, const FString& InGroup, FVector Offset, bool bMakeClose) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MergePointsToLandscape(AArteriesActor* OwnerActor, UArteriesObject* Target, const FString& InGroup, FVector RayCastOffset, float RayDistance) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MergePointsToGrid(UArteriesObject* Target, const FString& InGroup, float GridSize, FVector Offset) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MergeAndCleanInstancedMeshToStaticSurface(AArteriesActor* OwnerActor, UArteriesObject* Target, bool bHitLandscapeOnly, float RayCastDistance, float Tolerence) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::MakeHoles(UArteriesObject* Target, const FString& HoleGroups, const FString& OutHoleGroups, int32 MaxHoleIteration, int32 MaxHoleNum, float HoleIterationChance) {
    return NULL;
}

int32 UGSEArteriesFuncLib::GetNumberOfPoints(UArteriesObject* Target) {
    return 0;
}

FRandomStream UGSEArteriesFuncLib::GenRandSeedStream() {
    return FRandomStream{};
}

UArteriesObject* UGSEArteriesFuncLib::FindWindowFeaturePoints(UArteriesObject* Target, int32 WindowNum, float WindowUnitLength) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::FindLeafPoints(UArteriesObject* Target, const FString& InGroup) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::FindFlatFeaturePoints(UArteriesObject* Target, const FString& InGroup, bool bFindSlopePoints, float Tolerence) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::FindDoorFeaturePoints(AArteriesActor* OwnerActor, UArteriesObject* Target, int32 DoorNum, float UnitLength, float DoorUnitLength, const FString& DoorGroup, const FString& DoorCatnateGroup, const FString& RestGroup, float DoorCatUnitLength, GSATERIES_SIDE_SELECT_FEATURE eSelectSide, GSATERIES_SIDE_DISTRIBUTION_FEATURE eDistribute) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::FindCornerPoints(UArteriesObject* Target, const FString& InGroup, bool WithAdjacentPoints) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::CreateSlopeSideSamplingSurface(UArteriesObject* BackBones, const FString& InPrimGroup, float OffsetLength) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::CreateSamplingSurface(UArteriesObject* BackBones, const FString& InPrimGroup, float Length, FVector InDirection) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::CreateNoiseGroup(UArteriesObject* Target, const FString& InGroup, const FString& OutGeneralGroup, const FString& OutNoiseGroup, float NoiseRatio) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::CreateGSArteriesPoint(FVector InPosition) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::BreakPrimitivesIntoPoints(UArteriesObject* Target, const FString& InGroup, bool bKeepRotation, bool bResetUpDirection) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AggregatePoints(UArteriesObject* Target, const FString& Groups, int32 DesiredGroupNum) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedSmartStackToPointsBySoftPath(AArteriesActor* OwnerActor, UArteriesObject* Target, int32 ExpectedObjectsNum, const FString& Groups, const TMap<FSoftObjectPath, FGSArteriesStackRule>& SoftPathToRuleMap, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, const TArray<FVector>& InCustomCornerLocs, float StepYaw, float StepPitch, float StepRoll) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedSmartCopyToPointsBySoftObjectExtents(UArteriesObject* Target, const FString& Groups, TArray<FSoftObjectPath> Sources, TArray<FSoftObjectPath> NoiseSources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, GSATERIES_SAMPLE_AXIS SampleAxis, float StepYaw, float StepPitch, float StepRoll, float LineTwistChance, float UnitNoiseChane, float ResampleScale, int32 IterationCount, bool CurvelyAdjusting) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedSmartCopyToPointsByMeshExtents(UArteriesObject* Target, const FString& Groups, TArray<UStaticMesh*> MeshSources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, GSATERIES_SAMPLE_AXIS SampleAxis, float StepYaw, float StepPitch, float StepRoll, float LineNoiseChance, float ResampleScale) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToPointsByTrSoftPath(UArteriesObject* Target, const FString& Groups, TArray<FBaseTransformedSoftObject> Sources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, float EachPathWidth, bool bIgnoreCorner, bool bIgnoreCornerAdjacent, bool bGenerateMultiPath, int32 GenPathCount) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToPointsBySoftPath(UArteriesObject* Target, const FString& Groups, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bIgnoreCorner, bool bIgnoreCornerAdjacent) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToPoints(UArteriesObject* Target, const FString& Groups, TArray<UObject*> Sources, FTransform LocalTransform) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToEndPointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bIgnoreDelatZ) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToCornerPointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bAsInnerCorner, bool bAlongCurveOutNormalOnly) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AdvancedCopyToCornerCatenatePointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, float UnitLength, bool bCatOutCorner, bool bAlongCurveOutNormalOnly) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AddRoofToSimpleRect(UArteriesObject* Target, const FString& InGroup) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AddPerpendicularLinesAlongLine(UArteriesObject* BackBones, const FString& InGroup, float Length) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AddNoiseToPoints(UArteriesObject* Target, const FString& InGroup, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, float StepYaw, float StepPitch, float StepRoll, float NoiseRatio) {
    return NULL;
}

UArteriesObject* UGSEArteriesFuncLib::AddLineAlongSpline(USplineComponent* SplineComp, float Length) {
    return NULL;
}


