#pragma once
#include "CoreMinimal.h"
#include "EArteriesTangentOutputType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseTransformedSoftObject.h"
#include "GSATERIES_SAMPLE_AXIS.h"
#include "GSATERIES_SIDE_DISTRIBUTION_FEATURE.h"
#include "GSATERIES_SIDE_SELECT_FEATURE.h"
#include "GSArteriesStackRule.h"
#include "GSEArteriesFuncLib.generated.h"

class AArteriesActor;
class UArteriesObject;
class UObject;
class USplineComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GSEARTERIES_API UGSEArteriesFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSEArteriesFuncLib();

    UFUNCTION(BlueprintCallable)
    static UArteriesObject* SmartResampleBySourceExtent(UArteriesObject* Target, TArray<FSoftObjectPath> InSources, const GSATERIES_SAMPLE_AXIS InAxis, float MinResampleLength, float MaxResampleLength, float ResampleScale);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* ScalizeGridPrimitive(UArteriesObject* Target, float UnitLength);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* ResizePrimitive2D(UArteriesObject* Target, const FString& InGroup, float Distance, bool bInwards);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* ResampleEachPrimsByLengths(UArteriesObject* Target, TArray<float> SegmentLengthSets, bool ByEdge, int32 NumSegments, EArteriesTangentOutputType OutputType);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* ResampleAsMidPoints(UArteriesObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* RayCastDown(AArteriesActor* OwnerActor, UArteriesObject* BackBones, const FString& InGroup, FVector RayCastOffset, float RayCastDistance, float EndOffsetLength, bool bHitLandscapeOnly);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergePointsToStaticSurface(AArteriesActor* OwnerActor, UArteriesObject* Target, const FString& InGroup, FVector RayCastOffset, float RayDistance);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergePointsToPrimitive(UArteriesObject* Target, const FString& InGroup, FVector Offset, bool bMakeClose);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergePointsToLandscape(AArteriesActor* OwnerActor, UArteriesObject* Target, const FString& InGroup, FVector RayCastOffset, float RayDistance);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergePointsToGrid(UArteriesObject* Target, const FString& InGroup, float GridSize, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergeAndCleanInstancedMeshToStaticSurface(AArteriesActor* OwnerActor, UArteriesObject* Target, bool bHitLandscapeOnly, float RayCastDistance, float Tolerence);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MakeHoles(UArteriesObject* Target, const FString& HoleGroups, const FString& OutHoleGroups, int32 MaxHoleIteration, int32 MaxHoleNum, float HoleIterationChance);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumberOfPoints(UArteriesObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static FRandomStream GenRandSeedStream();
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* FindWindowFeaturePoints(UArteriesObject* Target, int32 WindowNum, float WindowUnitLength);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* FindLeafPoints(UArteriesObject* Target, const FString& InGroup);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* FindFlatFeaturePoints(UArteriesObject* Target, const FString& InGroup, bool bFindSlopePoints, float Tolerence);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* FindDoorFeaturePoints(AArteriesActor* OwnerActor, UArteriesObject* Target, int32 DoorNum, float UnitLength, float DoorUnitLength, const FString& DoorGroup, const FString& DoorCatnateGroup, const FString& RestGroup, float DoorCatUnitLength, GSATERIES_SIDE_SELECT_FEATURE eSelectSide, GSATERIES_SIDE_DISTRIBUTION_FEATURE eDistribute);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* FindCornerPoints(UArteriesObject* Target, const FString& InGroup, bool WithAdjacentPoints);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* CreateSlopeSideSamplingSurface(UArteriesObject* BackBones, const FString& InPrimGroup, float OffsetLength);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* CreateSamplingSurface(UArteriesObject* BackBones, const FString& InPrimGroup, float Length, FVector InDirection);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* CreateNoiseGroup(UArteriesObject* Target, const FString& InGroup, const FString& OutGeneralGroup, const FString& OutNoiseGroup, float NoiseRatio);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* CreateGSArteriesPoint(FVector InPosition);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* BreakPrimitivesIntoPoints(UArteriesObject* Target, const FString& InGroup, bool bKeepRotation, bool bResetUpDirection);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AggregatePoints(UArteriesObject* Target, const FString& Groups, int32 DesiredGroupNum);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedSmartStackToPointsBySoftPath(AArteriesActor* OwnerActor, UArteriesObject* Target, int32 ExpectedObjectsNum, const FString& Groups, const TMap<FSoftObjectPath, FGSArteriesStackRule>& SoftPathToRuleMap, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, const TArray<FVector>& InCustomCornerLocs, float StepYaw, float StepPitch, float StepRoll);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedSmartCopyToPointsBySoftObjectExtents(UArteriesObject* Target, const FString& Groups, TArray<FSoftObjectPath> Sources, TArray<FSoftObjectPath> NoiseSources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, GSATERIES_SAMPLE_AXIS SampleAxis, float StepYaw, float StepPitch, float StepRoll, float LineTwistChance, float UnitNoiseChane, float ResampleScale, int32 IterationCount, bool CurvelyAdjusting);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedSmartCopyToPointsByMeshExtents(UArteriesObject* Target, const FString& Groups, TArray<UStaticMesh*> MeshSources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, GSATERIES_SAMPLE_AXIS SampleAxis, float StepYaw, float StepPitch, float StepRoll, float LineNoiseChance, float ResampleScale);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToPointsByTrSoftPath(UArteriesObject* Target, const FString& Groups, TArray<FBaseTransformedSoftObject> Sources, FTransform LocalTransform, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, float EachPathWidth, bool bIgnoreCorner, bool bIgnoreCornerAdjacent, bool bGenerateMultiPath, int32 GenPathCount);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToPointsBySoftPath(UArteriesObject* Target, const FString& Groups, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bIgnoreCorner, bool bIgnoreCornerAdjacent);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToPoints(UArteriesObject* Target, const FString& Groups, TArray<UObject*> Sources, FTransform LocalTransform);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToEndPointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bIgnoreDelatZ);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToCornerPointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, bool bAsInnerCorner, bool bAlongCurveOutNormalOnly);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AdvancedCopyToCornerCatenatePointsBySoftPath(UArteriesObject* Target, const FString& InGroup, TArray<FSoftObjectPath> Sources, FTransform LocalTransform, float UnitLength, bool bCatOutCorner, bool bAlongCurveOutNormalOnly);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AddRoofToSimpleRect(UArteriesObject* Target, const FString& InGroup);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AddPerpendicularLinesAlongLine(UArteriesObject* BackBones, const FString& InGroup, float Length);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AddNoiseToPoints(UArteriesObject* Target, const FString& InGroup, FTransform TransformNoiseLow, FTransform TransformNoiseHigh, float StepYaw, float StepPitch, float StepRoll, float NoiseRatio);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* AddLineAlongSpline(USplineComponent* SplineComp, float Length);
    
};

