#include "PCGBlueprintHelpers.h"

UPCGBlueprintHelpers::UPCGBlueprintHelpers() {
}

void UPCGBlueprintHelpers::SetSeedFromPosition(FPCGPoint& InPoint) {
}

void UPCGBlueprintHelpers::SetLocalCenter(FPCGPoint& InPoint, const FVector& InLocalCenter) {
}

void UPCGBlueprintHelpers::SetExtents(FPCGPoint& InPoint, const FVector& InExtents) {
}

FBox UPCGBlueprintHelpers::GetTransformedBounds(const FPCGPoint& InPoint) {
    return FBox{};
}

int64 UPCGBlueprintHelpers::GetTaskId(FPCGContext& Context) {
    return 0;
}

AActor* UPCGBlueprintHelpers::GetTargetActor(FPCGContext& Context, UPCGSpatialData* SpatialData) {
    return NULL;
}

UPCGSettings* UPCGBlueprintHelpers::GetSettings(FPCGContext& Context) {
    return NULL;
}

FRandomStream UPCGBlueprintHelpers::GetRandomStream(const FPCGPoint& InPoint, const UPCGSettings* OptionalSettings, const UPCGComponent* OptionalComponent) {
    return FRandomStream{};
}

UPCGComponent* UPCGBlueprintHelpers::GetOriginalComponent(FPCGContext& Context) {
    return NULL;
}

FVector UPCGBlueprintHelpers::GetLocalCenter(const FPCGPoint& InPoint) {
    return FVector{};
}

UPCGData* UPCGBlueprintHelpers::GetInputData(FPCGContext& Context) {
    return NULL;
}

FVector UPCGBlueprintHelpers::GetExtents(const FPCGPoint& InPoint) {
    return FVector{};
}

UPCGComponent* UPCGBlueprintHelpers::GetComponent(FPCGContext& Context) {
    return NULL;
}

FBox UPCGBlueprintHelpers::GetActorLocalBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents) {
    return FBox{};
}

UPCGData* UPCGBlueprintHelpers::GetActorData(FPCGContext& Context) {
    return NULL;
}

FBox UPCGBlueprintHelpers::GetActorBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents) {
    return FBox{};
}

UPCGData* UPCGBlueprintHelpers::CreatePCGDataFromActor(AActor* InActor, bool bParseActor) {
    return NULL;
}

int32 UPCGBlueprintHelpers::ComputeSeedFromPosition(const FVector& InPosition) {
    return 0;
}


