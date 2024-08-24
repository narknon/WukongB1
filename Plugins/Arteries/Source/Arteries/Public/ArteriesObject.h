#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ArteriesEdgeGroup.h"
#include "ArteriesGroupRange.h"
#include "ArteriesInstances.h"
#include "ArteriesPointGroup.h"
#include "ArteriesPrimitiveGroup.h"
#include "EArteriesAlignType.h"
#include "EArteriesGroupType.h"
#include "EArteriesTangentOutputType.h"
#include "ArteriesObject.generated.h"

class UArteriesObject;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class ARTERIES_API UArteriesObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArteriesPointGroup> PointGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArteriesEdgeGroup> EdgeGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArteriesPrimitiveGroup> PrimitiveGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, FArteriesInstances> InstancesMap;
    
    UArteriesObject();

    UFUNCTION(BlueprintCallable)
    UArteriesObject* Voronoi(const FString& Groups, int32 Seed, int32 Count, float Density, int32 Iterations);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Tube(FVector Origin, FRotator Rotation, FVector2D Radius, float Height, int32 Rows, int32 Columns);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Triangulate();
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Transform(const EArteriesGroupType GroupType, const FString& Groups, FRotator Rotation, FVector Translation, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Torus(FVector Origin, FRotator Rotation, FVector2D Radius, int32 Rows, int32 Columns);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Sweep(UArteriesObject* BackBones);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* SubDivide(const FString& Groups, float MinLength);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Sphere(FVector Origin, FRotator Rotation, FVector Radius, int32 Rows, int32 Columns);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* SortRandomly(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* SortByAttribute(FName AttrName);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* SetMaterial(const FString& Groups, UMaterialInterface* Material, FVector2D UVScale, FVector2D UVOffset, float UVRotation, bool NullOnly);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Scatter(const FString& Groups, int32 Seed, int32 Count, float Density, int32 Iterations);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Road(float DefaultWidth);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Reverse(const FString& Groups);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Resample(bool ByEdge, float SegmentLength, int32 NumSegments, EArteriesTangentOutputType OutputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PrimitiveInGroup(FName GroupName, int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* PolyExtrude(const FString& Groups, float Distance, float Inset, FName FrontGroup, FName SideGroup, bool DeleteSource);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* PolyExpand(const FString& Groups, float Offset, FName CurveGroup, FName SurfaceGroup, bool OutputTangents, bool DeleteSource);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* PolyBevel(const EArteriesGroupType GroupType, const FString& Groups, float Distance, int32 Divisions, bool bBevelSingleCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PointInGroup(FName GroupName, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumPrimitives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumPoints() const;
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* New();
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* MergeArray(const TArray<UArteriesObject*>& Objs);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Merge(UArteriesObject* Obj0, UArteriesObject* Obj1, UArteriesObject* Obj2, UArteriesObject* Obj3, UArteriesObject* Obj4);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Measure(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* MakeGrids(const FString& Groups, float GridSize, int32 MinGrids, bool OBBOnly);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Line(FVector Origin, FVector Direction, float Length, int32 NewNumPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 LastPrimitive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 LastPoint() const;
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Hole(const FString& OuterGroups, const FString& InnerGroups, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* GroupRange(const TArray<FArteriesGroupRange>& Groups);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Ground();
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Grid(FVector Origin, FRotator Rotation, FVector2D Size, int32 NumPointsX, int32 NumPointsY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrimitiveInt(FName Key, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPointTransform(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointInt(FName Key, int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Fuse(const FString& Groups, float SnapDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform Flatten(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Facet(float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Divide(float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* CopyToPoints(const FString& Groups, UObject* Source, FTransform LocalTransform);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* CopyAndTransform(int32 NumCopies, FTransform NewTransform);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Copy();
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Clip(const FString& Groups, FVector PlaneNormal, float PlaneDist, FName PositiveGroup, FName NegativeGroup);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Clean();
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Circle(FVector Origin, FRotator Rotation, FVector2D Radius, int32 NewNumPoints);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Carve(EArteriesAlignType StartAlign, float StartU, EArteriesAlignType EndAlign, float EndU);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Bridge(FName StartGroupName, FName EndGroupName);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* BreakPoints(const FString& Groups);
    
    UFUNCTION(BlueprintCallable)
    static UArteriesObject* Box(FVector Origin, FRotator Rotation, FVector Size, int32 NumPointsX, int32 NumPointsY, int32 NumPointsZ);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Blast(const FString& Groups, const FString& Tags, bool DeleteNonSelected);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Arc(const FString& Groups, int32 NumSegments, float Angle);
    
    UFUNCTION(BlueprintCallable)
    UArteriesObject* Add(UObject* Source, FTransform NewTransform);
    
};

