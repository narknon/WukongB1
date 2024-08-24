#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "HitResultSimple.h"
#include "BGUSelectUtil.generated.h"

class AActor;
class ABGUCharacter;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGUSelectUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUSelectUtil();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 SphereOverlapBGUCharacters(UObject* WorldContext, const FVector& SphereCenter, float Radius, TArray<ABGUCharacter*>& OutArray, TEnumAsByte<ECollisionChannel> QueryChannel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SelectBGUCharactersInRect(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SelectBGUCharactersInCylinder(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SelectBGUCharactersInCircle(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MultiSphereTraceForObjects(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, TArray<FHitResultSimple>& HitResultList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 LineTraceSimple(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bDebug, FHitResultSimple& HitResult, const TArray<AActor*>& Ingnores, bool bTraceComplex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 LineTraceOnlyCheck(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bDebug, FHitResultSimple& HitResult, const TArray<AActor*>& Ingnores, bool bTraceComplex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 LineTraceMultiByObjType(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, TArray<FHitResultSimple>& HitResultList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 LineTraceForObjectsTypeSimple(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, FHitResultSimple& HitResult, bool bTraceComplex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 LineTraceForObjects(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, FHitResultSimple& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHitUnderCursor(APlayerController* PlayerCtrl, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bTraceComplex, FHitResultSimple& HitResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 BoxOverlapV2BGUCharacters(UObject* WorldContextObject, const FVector& BoxPos, const FQuat& Rot, const FVector& BoxExtent, TArray<ABGUCharacter*>& OutArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 BoxOverlapBGUCharacters(UObject* WorldContextObject, const FVector& BoxPos, const FVector& BoxExtent, TArray<ABGUCharacter*>& OutArray, TEnumAsByte<ECollisionChannel> QueryChannel);
    
};

