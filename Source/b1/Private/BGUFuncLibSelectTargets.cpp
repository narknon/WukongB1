#include "BGUFuncLibSelectTargets.h"

UBGUFuncLibSelectTargets::UBGUFuncLibSelectTargets() {
}

void UBGUFuncLibSelectTargets::BGUOverlapMultiByObjectType(UObject* WorldContextObject, const FVector& Origin, const FQuat& Rot, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FGSSweepCheckShapeInfo OverlapShapeInfo, const TArray<AActor*>& IgnoreActors, TArray<FUStGSOverlapResult>& OverlapResults, bool IsDrawDebugShape) {
}

bool UBGUFuncLibSelectTargets::BGUOverlapAnyTestByObjectType(UWorld* WorldContextObject, const FVector& Pos, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, EGSSweepCheckShapeType CollisionShape, const FVector& ShapeExtent) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGUMultiCompOverlapByObjectType(UObject* WorldContextObject, TArray<UShapeComponent*> OverlapShapeComponents, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, const TArray<AActor*>& IgnoreActors, TArray<UShapeComponent*>& OverlapComps, TArray<AActor*>& OverlapOtherActors, TArray<UPrimitiveComponent*>& OverlapOtherComps) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGULineTraceSingleByCollisionChannel(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> CollisionChannel, FUStGSHitResult& SweepResult, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebug) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGULineTraceMultiByCollisionChannel(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebug) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGUIsSelectTargetInFilterBP(AActor* Caster, AActor* Target, int32 Filter) {
    return false;
}

void UBGUFuncLibSelectTargets::BGUGetSweepCheckResultsByCollisionChannelWithCaster(UObject* WorldContextObject, const FTransform& PreTransform, const FTransform& CurTransform, const FQuat& Rot, TEnumAsByte<ECollisionChannel> CollisionChannel, FGSSweepCheckShapeInfo SweepCheckShapeInfo, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebugShape, AActor* Caster, int32 GroupId, ESweepCheckType SweepCheckType) {
}

void UBGUFuncLibSelectTargets::BGUGetSweepCheckResultsByCollisionChannel(UObject* WorldContextObject, const FTransform& PreTransform, const FTransform& CurTransform, const FQuat& Rot, TEnumAsByte<ECollisionChannel> CollisionChannel, FGSSweepCheckShapeInfo SweepCheckShapeInfo, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebugShape) {
}

TArray<AActor*> UBGUFuncLibSelectTargets::BGUGetSightPerceivedActors(const UAIPerceptionComponent* PerceptionComp) {
    return TArray<AActor*>();
}

TArray<AActor*> UBGUFuncLibSelectTargets::BGUGetPerceivedActors(const UAIPerceptionComponent* PerceptionComp) {
    return TArray<AActor*>();
}

bool UBGUFuncLibSelectTargets::BGUComputePenetration(UPrimitiveComponent* SelfComponent, FVector& Direction, float& Distance, UPrimitiveComponent* OtherComponent, const FVector& Pos, const FQuat& Rot) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGUCompOverlapCompsByObjectType(UPrimitiveComponent* Component, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGUCompOverlapCompsByChannel(UPrimitiveComponent* Component, TEnumAsByte<ECollisionChannel> TraceChannel, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UBGUFuncLibSelectTargets::BGUComponentSweepMulti(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, UPrimitiveComponent* PrimComp, const FVector& Start, const FVector& End, const FQuat& Rot, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter) {
    return false;
}


