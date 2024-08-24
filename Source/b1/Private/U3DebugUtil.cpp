#include "U3DebugUtil.h"

UU3DebugUtil::UU3DebugUtil() {
}

void UU3DebugUtil::U3FlushPersistentDebugLines(const UWorld* InWorld) {
}

void UU3DebugUtil::U3FlushDebugStrings(const UWorld* InWorld) {
}

void UU3DebugUtil::U3DrawDebugString(const UWorld* InWorld, const FVector& TextLocation, const FString& Text, AActor* TestBaseActor, const FColor& TextColor, float Duration, bool bDrawShadow, float FontScale) {
}

void UU3DebugUtil::U3DrawDebugSphere(const UWorld* InWorld, const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugSolidPlane2(const UWorld* InWorld, const FPlane& P, const FVector& Loc, const FVector2D& Extents, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugSolidPlane(const UWorld* InWorld, const FPlane& P, const FVector& Loc, float Size, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugSolidBox3(const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FQuat& Rotation, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugSolidBox2(const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugSolidBox(const UWorld* InWorld, const FBox& Box, const FColor& Color, const FTransform& Transform, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugPoint(const UWorld* InWorld, const FVector& position, float Size, const FColor& PointColor, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugMesh(const UWorld* InWorld, const TArray<FVector>& Verts, const TArray<int32>& Indices, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugLine(const UWorld* InWorld, const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugFrustum(const UWorld* InWorld, const FMatrix& FrustumToWorld, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugDirectionalArrow(const UWorld* InWorld, const FVector& LineStart, const FVector& LineEnd, float ArrowSize, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugCylinder(const UWorld* InWorld, const FVector& Start, const FVector& End, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugCrosshairs(const UWorld* InWorld, const FVector& AxisLoc, const FRotator& AxisRot, float Scale, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugCoordinateSystem(const UWorld* InWorld, const FVector& AxisLoc, const FRotator& AxisRot, float Scale, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugCone(const UWorld* InWorld, const FVector& Origin, const FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugCircle2(const UWorld* InWorld, FVector Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis) {
}

void UU3DebugUtil::U3DrawDebugCircle(const UWorld* InWorld, const FMatrix& TransformMatrix, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness, bool bDrawAxis) {
}

void UU3DebugUtil::U3DrawDebugCapsule(const UWorld* InWorld, const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugCanvasWireSphere(UCanvas* Canvas, const FVector& Base, FColor Color, float Radius, int32 NumSides) {
}

void UU3DebugUtil::U3DrawDebugCanvasWireCone(UCanvas* Canvas, const FTransform& Transform, float ConeRadius, float ConeAngle, int32 ConeSides, FColor Color) {
}

void UU3DebugUtil::U3DrawDebugCanvasLine(UCanvas* Canvas, const FVector& Start, const FVector& End, const FLinearColor& LineColor) {
}

void UU3DebugUtil::U3DrawDebugCanvasCircle(UCanvas* Canvas, const FVector& Base, const FVector& X, const FVector& Y, FColor Color, float Radius, int32 NumSides) {
}

void UU3DebugUtil::U3DrawDebugCanvas2DLine2(UCanvas* Canvas, const FVector2D& StartPosition, const FVector2D& EndPosition, const FLinearColor& LineColor, const float& LineThickness) {
}

void UU3DebugUtil::U3DrawDebugCanvas2DLine(UCanvas* Canvas, const FVector& Start, const FVector& End, const FLinearColor& LineColor) {
}

void UU3DebugUtil::U3DrawDebugCanvas2DCircle(UCanvas* Canvas, const FVector2D& Center, float Radius, int32 NumSides, const FLinearColor& LineColor, const float& LineThickness) {
}

void UU3DebugUtil::U3DrawDebugCanvas2DBox(UCanvas* Canvas, const FBox2D& Box, const FLinearColor& LineColor, const float& LineThickness) {
}

void UU3DebugUtil::U3DrawDebugCamera(const UWorld* InWorld, const FVector& Location, const FRotator& Rotation, float FOVDeg, float Scale, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UU3DebugUtil::U3DrawDebugBox2(const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugBox(const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebugAltCone(const UWorld* InWorld, const FVector& Origin, const FRotator& Rotation, float Length, float AngleWidth, float AngleHeight, const FColor& DrawColor, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawDebug2DDonut(const UWorld* InWorld, const FMatrix& TransformMatrix, float InnerRadius, float OuterRadius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::U3DrawCircle(const UWorld* InWorld, const FVector& Base, const FVector& X, const FVector& Y, const FColor& Color, float Radius, int32 NumSides, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UU3DebugUtil::DisableAllScreenMessages(UObject* WorldCtx) {
}


