#include "ArteriesObject.h"

UArteriesObject::UArteriesObject() {
}

UArteriesObject* UArteriesObject::Voronoi(const FString& Groups, int32 Seed, int32 Count, float Density, int32 Iterations) {
    return NULL;
}

UArteriesObject* UArteriesObject::Tube(FVector Origin, FRotator Rotation, FVector2D Radius, float Height, int32 Rows, int32 Columns) {
    return NULL;
}

UArteriesObject* UArteriesObject::Triangulate() {
    return NULL;
}

UArteriesObject* UArteriesObject::Transform(const EArteriesGroupType GroupType, const FString& Groups, FRotator Rotation, FVector Translation, FVector Scale) {
    return NULL;
}

UArteriesObject* UArteriesObject::Torus(FVector Origin, FRotator Rotation, FVector2D Radius, int32 Rows, int32 Columns) {
    return NULL;
}

UArteriesObject* UArteriesObject::Sweep(UArteriesObject* BackBones) {
    return NULL;
}

UArteriesObject* UArteriesObject::SubDivide(const FString& Groups, float MinLength) {
    return NULL;
}

UArteriesObject* UArteriesObject::Sphere(FVector Origin, FRotator Rotation, FVector Radius, int32 Rows, int32 Columns) {
    return NULL;
}

UArteriesObject* UArteriesObject::SortRandomly(int32 Seed) {
    return NULL;
}

UArteriesObject* UArteriesObject::SortByAttribute(FName AttrName) {
    return NULL;
}

UArteriesObject* UArteriesObject::SetMaterial(const FString& Groups, UMaterialInterface* Material, FVector2D UVScale, FVector2D UVOffset, float UVRotation, bool NullOnly) {
    return NULL;
}

UArteriesObject* UArteriesObject::Scatter(const FString& Groups, int32 Seed, int32 Count, float Density, int32 Iterations) {
    return NULL;
}

UArteriesObject* UArteriesObject::Road(float DefaultWidth) {
    return NULL;
}

UArteriesObject* UArteriesObject::Reverse(const FString& Groups) {
    return NULL;
}

UArteriesObject* UArteriesObject::Resample(bool ByEdge, float SegmentLength, int32 NumSegments, EArteriesTangentOutputType OutputType) {
    return NULL;
}

bool UArteriesObject::PrimitiveInGroup(FName GroupName, int32 Index) const {
    return false;
}

UArteriesObject* UArteriesObject::PolyExtrude(const FString& Groups, float Distance, float Inset, FName FrontGroup, FName SideGroup, bool DeleteSource) {
    return NULL;
}

UArteriesObject* UArteriesObject::PolyExpand(const FString& Groups, float Offset, FName CurveGroup, FName SurfaceGroup, bool OutputTangents, bool DeleteSource) {
    return NULL;
}

UArteriesObject* UArteriesObject::PolyBevel(const EArteriesGroupType GroupType, const FString& Groups, float Distance, int32 Divisions, bool bBevelSingleCurve) {
    return NULL;
}

bool UArteriesObject::PointInGroup(FName GroupName, int32 Index) const {
    return false;
}

int32 UArteriesObject::NumPrimitives() const {
    return 0;
}

int32 UArteriesObject::NumPoints() const {
    return 0;
}

UArteriesObject* UArteriesObject::New() {
    return NULL;
}

UArteriesObject* UArteriesObject::MergeArray(const TArray<UArteriesObject*>& Objs) {
    return NULL;
}

UArteriesObject* UArteriesObject::Merge(UArteriesObject* Obj0, UArteriesObject* Obj1, UArteriesObject* Obj2, UArteriesObject* Obj3, UArteriesObject* Obj4) {
    return NULL;
}

UArteriesObject* UArteriesObject::Measure(FName Name) {
    return NULL;
}

UArteriesObject* UArteriesObject::MakeGrids(const FString& Groups, float GridSize, int32 MinGrids, bool OBBOnly) {
    return NULL;
}

UArteriesObject* UArteriesObject::Line(FVector Origin, FVector Direction, float Length, int32 NewNumPoints) {
    return NULL;
}

int32 UArteriesObject::LastPrimitive() const {
    return 0;
}

int32 UArteriesObject::LastPoint() const {
    return 0;
}

UArteriesObject* UArteriesObject::Hole(const FString& OuterGroups, const FString& InnerGroups, float Tolerance) {
    return NULL;
}

UArteriesObject* UArteriesObject::GroupRange(const TArray<FArteriesGroupRange>& Groups) {
    return NULL;
}

UArteriesObject* UArteriesObject::Ground() {
    return NULL;
}

UArteriesObject* UArteriesObject::Grid(FVector Origin, FRotator Rotation, FVector2D Size, int32 NumPointsX, int32 NumPointsY) {
    return NULL;
}

int32 UArteriesObject::GetPrimitiveInt(FName Key, int32 Index) const {
    return 0;
}

FTransform UArteriesObject::GetPointTransform(int32 Index) const {
    return FTransform{};
}

int32 UArteriesObject::GetPointInt(FName Key, int32 Index) const {
    return 0;
}

UArteriesObject* UArteriesObject::Fuse(const FString& Groups, float SnapDist) {
    return NULL;
}

FTransform UArteriesObject::Flatten(const FTransform& NewTransform) {
    return FTransform{};
}

UArteriesObject* UArteriesObject::Facet(float Tolerance) {
    return NULL;
}

UArteriesObject* UArteriesObject::Divide(float Tolerance) {
    return NULL;
}

UArteriesObject* UArteriesObject::CopyToPoints(const FString& Groups, UObject* Source, FTransform LocalTransform) {
    return NULL;
}

UArteriesObject* UArteriesObject::CopyAndTransform(int32 NumCopies, FTransform NewTransform) {
    return NULL;
}

UArteriesObject* UArteriesObject::Copy() {
    return NULL;
}

UArteriesObject* UArteriesObject::Clip(const FString& Groups, FVector PlaneNormal, float PlaneDist, FName PositiveGroup, FName NegativeGroup) {
    return NULL;
}

UArteriesObject* UArteriesObject::Clean() {
    return NULL;
}

UArteriesObject* UArteriesObject::Circle(FVector Origin, FRotator Rotation, FVector2D Radius, int32 NewNumPoints) {
    return NULL;
}

UArteriesObject* UArteriesObject::Carve(EArteriesAlignType StartAlign, float StartU, EArteriesAlignType EndAlign, float EndU) {
    return NULL;
}

UArteriesObject* UArteriesObject::Bridge(FName StartGroupName, FName EndGroupName) {
    return NULL;
}

UArteriesObject* UArteriesObject::BreakPoints(const FString& Groups) {
    return NULL;
}

UArteriesObject* UArteriesObject::Box(FVector Origin, FRotator Rotation, FVector Size, int32 NumPointsX, int32 NumPointsY, int32 NumPointsZ) {
    return NULL;
}

UArteriesObject* UArteriesObject::Blast(const FString& Groups, const FString& Tags, bool DeleteNonSelected) {
    return NULL;
}

UArteriesObject* UArteriesObject::Arc(const FString& Groups, int32 NumSegments, float Angle) {
    return NULL;
}

UArteriesObject* UArteriesObject::Add(UObject* Source, FTransform NewTransform) {
    return NULL;
}


