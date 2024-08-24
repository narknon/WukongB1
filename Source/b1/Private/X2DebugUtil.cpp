#include "X2DebugUtil.h"

UX2DebugUtil::UX2DebugUtil() {
}

void UX2DebugUtil::X2FlushPersistentDebugLines(const bool DebugTag, const UWorld* InWorld) {
}

void UX2DebugUtil::X2FlushDebugStrings(const bool DebugTag, const UWorld* InWorld) {
}

void UX2DebugUtil::X2DrawDebugString(const bool DebugTag, const UWorld* InWorld, const FVector& TextLocation, const FString& Text, AActor* TestBaseActor, const FColor& TextColor, float Duration, bool bDrawShadow, float FontScale) {
}

void UX2DebugUtil::X2DrawDebugSphere(const bool DebugTag, const UWorld* InWorld, const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugSolidPlane2(const bool DebugTag, const UWorld* InWorld, const FPlane& P, const FVector& Loc, const FVector2D& Extents, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugSolidPlane(const bool DebugTag, const UWorld* InWorld, const FPlane& P, const FVector& Loc, float Size, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugSolidBox3(const bool DebugTag, const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FQuat& Rotation, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugSolidBox2(const bool DebugTag, const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugSolidBox(const bool DebugTag, const UWorld* InWorld, const FBox& Box, const FColor& Color, const FTransform& Transform, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugPoint(const bool DebugTag, const UWorld* InWorld, const FVector& position, float Size, const FColor& PointColor, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugMesh(const bool DebugTag, const UWorld* InWorld, const TArray<FVector>& Verts, const TArray<int32>& Indices, const FColor& Color, bool bPersistent, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugLine(const bool DebugTag, const UWorld* InWorld, const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugFrustum(const bool DebugTag, const UWorld* InWorld, const FMatrix& FrustumToWorld, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugDirectionalArrow(const bool DebugTag, const UWorld* InWorld, const FVector& LineStart, const FVector& LineEnd, float ArrowSize, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugCylinder(const bool DebugTag, const UWorld* InWorld, const FVector& Start, const FVector& End, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugCrosshairs(const bool DebugTag, const UWorld* InWorld, const FVector& AxisLoc, const FRotator& AxisRot, float Scale, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugCoordinateSystem(const bool DebugTag, const UWorld* InWorld, const FVector& AxisLoc, const FRotator& AxisRot, float Scale, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugCone(const bool DebugTag, const UWorld* InWorld, const FVector& Origin, const FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugCircle2(const bool DebugTag, const UWorld* InWorld, FVector Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis) {
}

void UX2DebugUtil::X2DrawDebugCircle(const bool DebugTag, const UWorld* InWorld, const FMatrix& TransformMatrix, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness, bool bDrawAxis) {
}

void UX2DebugUtil::X2DrawDebugCapsule(const bool DebugTag, const UWorld* InWorld, const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugCanvasWireSphere(const bool DebugTag, UCanvas* Canvas, const FVector& Base, FColor Color, float Radius, int32 NumSides) {
}

void UX2DebugUtil::X2DrawDebugCanvasWireCone(const bool DebugTag, UCanvas* Canvas, const FTransform& Transform, float ConeRadius, float ConeAngle, int32 ConeSides, FColor Color) {
}

void UX2DebugUtil::X2DrawDebugCanvasLine(const bool DebugTag, UCanvas* Canvas, const FVector& Start, const FVector& End, const FLinearColor& LineColor) {
}

void UX2DebugUtil::X2DrawDebugCanvasCircle(const bool DebugTag, UCanvas* Canvas, const FVector& Base, const FVector& X, const FVector& Y, FColor Color, float Radius, int32 NumSides) {
}

void UX2DebugUtil::X2DrawDebugCanvas2DLine2(const bool DebugTag, UCanvas* Canvas, const FVector2D& StartPosition, const FVector2D& EndPosition, const FLinearColor& LineColor, const float& LineThickness) {
}

void UX2DebugUtil::X2DrawDebugCanvas2DLine(const bool DebugTag, UCanvas* Canvas, const FVector& Start, const FVector& End, const FLinearColor& LineColor) {
}

void UX2DebugUtil::X2DrawDebugCanvas2DCircle(const bool DebugTag, UCanvas* Canvas, const FVector2D& Center, float Radius, int32 NumSides, const FLinearColor& LineColor, const float& LineThickness) {
}

void UX2DebugUtil::X2DrawDebugCanvas2DBox(const bool DebugTag, UCanvas* Canvas, const FBox2D& Box, const FLinearColor& LineColor, const float& LineThickness) {
}

void UX2DebugUtil::X2DrawDebugCamera(const bool DebugTag, const UWorld* InWorld, const FVector& Location, const FRotator& Rotation, float FOVDeg, float Scale, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
}

void UX2DebugUtil::X2DrawDebugBox2(const bool DebugTag, const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugBox(const bool DebugTag, const UWorld* InWorld, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebugAltCone(const bool DebugTag, const UWorld* InWorld, const FVector& Origin, const FRotator& Rotation, float Length, float AngleWidth, float AngleHeight, const FColor& DrawColor, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawDebug2DDonut(const bool DebugTag, const UWorld* InWorld, const FMatrix& TransformMatrix, float InnerRadius, float OuterRadius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::X2DrawCircle(const bool DebugTag, const UWorld* InWorld, const FVector& Base, const FVector& X, const FVector& Y, const FColor& Color, float Radius, int32 NumSides, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UX2DebugUtil::DisableAllScreenMessages(UObject* WorldCtx) {
}


