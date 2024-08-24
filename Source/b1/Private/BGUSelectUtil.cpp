#include "BGUSelectUtil.h"

UBGUSelectUtil::UBGUSelectUtil() {
}

int32 UBGUSelectUtil::SphereOverlapBGUCharacters(UObject* WorldContext, const FVector& SphereCenter, float Radius, TArray<ABGUCharacter*>& OutArray, TEnumAsByte<ECollisionChannel> QueryChannel) {
    return 0;
}

int32 UBGUSelectUtil::SelectBGUCharactersInRect(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params) {
    return 0;
}

int32 UBGUSelectUtil::SelectBGUCharactersInCylinder(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params) {
    return 0;
}

int32 UBGUSelectUtil::SelectBGUCharactersInCircle(UObject* WorldContextObject, TArray<AActor*>& OutActors, AActor* TargetBase, int32 TargetCount, int32 TargetFilter, TArray<int32> Params) {
    return 0;
}

int32 UBGUSelectUtil::MultiSphereTraceForObjects(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, TArray<FHitResultSimple>& HitResultList) {
    return 0;
}

bool UBGUSelectUtil::LineTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

int32 UBGUSelectUtil::LineTraceSimple(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bDebug, FHitResultSimple& HitResult, const TArray<AActor*>& Ingnores, bool bTraceComplex) {
    return 0;
}

int32 UBGUSelectUtil::LineTraceOnlyCheck(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bDebug, FHitResultSimple& HitResult, const TArray<AActor*>& Ingnores, bool bTraceComplex) {
    return 0;
}

int32 UBGUSelectUtil::LineTraceMultiByObjType(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, TArray<FHitResultSimple>& HitResultList) {
    return 0;
}

int32 UBGUSelectUtil::LineTraceForObjectsTypeSimple(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, FHitResultSimple& HitResult, bool bTraceComplex) {
    return 0;
}

int32 UBGUSelectUtil::LineTraceForObjects(UObject* WorldContextObject, const FVector& StartTrace, const FVector& EndTrace, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDebug, FHitResultSimple& HitResult) {
    return 0;
}

bool UBGUSelectUtil::GetHitUnderCursor(APlayerController* PlayerCtrl, TEnumAsByte<ETraceTypeQuery> QueryChnl, bool bTraceComplex, FHitResultSimple& HitResult) {
    return false;
}

int32 UBGUSelectUtil::BoxOverlapV2BGUCharacters(UObject* WorldContextObject, const FVector& BoxPos, const FQuat& Rot, const FVector& BoxExtent, TArray<ABGUCharacter*>& OutArray) {
    return 0;
}

int32 UBGUSelectUtil::BoxOverlapBGUCharacters(UObject* WorldContextObject, const FVector& BoxPos, const FVector& BoxExtent, TArray<ABGUCharacter*>& OutArray, TEnumAsByte<ECollisionChannel> QueryChannel) {
    return 0;
}


