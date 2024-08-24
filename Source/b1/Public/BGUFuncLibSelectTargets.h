#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EGSSweepCheckShapeType.h"
#include "ESweepCheckType.h"
#include "GSSweepCheckShapeInfo.h"
#include "UStGSHitResult.h"
#include "UStGSOverlapResult.h"
#include "BGUFuncLibSelectTargets.generated.h"

class AActor;
class UAIPerceptionComponent;
class UObject;
class UPrimitiveComponent;
class UShapeComponent;
class UWorld;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibSelectTargets : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibSelectTargets();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUOverlapMultiByObjectType(UObject* WorldContextObject, const FVector& Origin, const FQuat& Rot, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FGSSweepCheckShapeInfo OverlapShapeInfo, const TArray<AActor*>& IgnoreActors, TArray<FUStGSOverlapResult>& OverlapResults, bool IsDrawDebugShape);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUOverlapAnyTestByObjectType(UWorld* WorldContextObject, const FVector& Pos, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, EGSSweepCheckShapeType CollisionShape, const FVector& ShapeExtent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUMultiCompOverlapByObjectType(UObject* WorldContextObject, TArray<UShapeComponent*> OverlapShapeComponents, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, const TArray<AActor*>& IgnoreActors, TArray<UShapeComponent*>& OverlapComps, TArray<AActor*>& OverlapOtherActors, TArray<UPrimitiveComponent*>& OverlapOtherComps);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGULineTraceSingleByCollisionChannel(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> CollisionChannel, FUStGSHitResult& SweepResult, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGULineTraceMultiByCollisionChannel(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsSelectTargetInFilterBP(AActor* Caster, AActor* Target, int32 Filter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUGetSweepCheckResultsByCollisionChannelWithCaster(UObject* WorldContextObject, const FTransform& PreTransform, const FTransform& CurTransform, const FQuat& Rot, TEnumAsByte<ECollisionChannel> CollisionChannel, FGSSweepCheckShapeInfo SweepCheckShapeInfo, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebugShape, AActor* Caster, int32 GroupId, ESweepCheckType SweepCheckType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUGetSweepCheckResultsByCollisionChannel(UObject* WorldContextObject, const FTransform& PreTransform, const FTransform& CurTransform, const FQuat& Rot, TEnumAsByte<ECollisionChannel> CollisionChannel, FGSSweepCheckShapeInfo SweepCheckShapeInfo, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter, bool IsDrawDebugShape);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> BGUGetSightPerceivedActors(const UAIPerceptionComponent* PerceptionComp);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> BGUGetPerceivedActors(const UAIPerceptionComponent* PerceptionComp);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUComputePenetration(UPrimitiveComponent* SelfComponent, FVector& Direction, float& Distance, UPrimitiveComponent* OtherComponent, const FVector& Pos, const FQuat& Rot);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUCompOverlapCompsByObjectType(UPrimitiveComponent* Component, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUCompOverlapCompsByChannel(UPrimitiveComponent* Component, TEnumAsByte<ECollisionChannel> TraceChannel, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUComponentSweepMulti(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, UPrimitiveComponent* PrimComp, const FVector& Start, const FVector& End, const FQuat& Rot, TArray<FUStGSHitResult>& SweepResults, const TArray<AActor*> IgnoreActors, const TArray<TEnumAsByte<ECollisionChannel>> BlockChannelsForFilter, const TArray<TEnumAsByte<ECollisionChannel>> OverlapChannelsForFilter);
    
};

