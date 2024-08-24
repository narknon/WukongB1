#include "GSE_ActorFuncLib.h"
#include "Templates/SubclassOf.h"

UGSE_ActorFuncLib::UGSE_ActorFuncLib() {
}

void UGSE_ActorFuncLib::UpdateActorOverlaps(AActor* Actor) {
}

void UGSE_ActorFuncLib::StatLevelNaniteMemory(TArray<ULevel*> LoadedLevels, const FString& WorldPositionFile, const FString& MemoryFile) {
}

void UGSE_ActorFuncLib::SpawnSphereUniformPoints(TArray<FVector>& SphereUniformPoints, int32 NumOfPoints, float Radius) {
}

AActor* UGSE_ActorFuncLib::SpawnBlueprintActorByFactory_BP(UBlueprint* InAsset, UObject* Obj, const FTransform& InTransform) {
    return NULL;
}

AActor* UGSE_ActorFuncLib::SpawnBlueprintActorByFactory(UBlueprint* InAsset, ULevel* InLevel, const FTransform& InTransform) {
    return NULL;
}

void UGSE_ActorFuncLib::SetMaterialInterfaceQualityLevel(AActor* Actor, UMaterialInterface* Material, int32 QualityLevel) {
}

void UGSE_ActorFuncLib::SetActorTransformSimple(AActor* Actor, FTransform Trans, bool bSweep, int32 iTeleportType) {
}

void UGSE_ActorFuncLib::SetActorRotationSimple(AActor* Actor, FRotator Rot, int32 iTeleportType) {
}

void UGSE_ActorFuncLib::SetActorLocationSimple(AActor* Actor, FVector Pos, bool bSweep, int32 iTeleportType) {
}

void UGSE_ActorFuncLib::SetActorLocationAndRotationSimple(AActor* Actor, FVector Pos, FRotator Rot, bool bSweep, int32 iTeleportType) {
}

void UGSE_ActorFuncLib::SetActorComponentsTickInterval(AActor* Actor, float NewInterval) {
}

void UGSE_ActorFuncLib::SetActorComponentsTickEnable(AActor* Actor, bool bEnable) {
}

void UGSE_ActorFuncLib::RemoveComponent(UActorComponent* Component) {
}

void UGSE_ActorFuncLib::LoadReflectionCubeLocation(TArray<FVector>& PathPointList, const FString& FilePathUnderProjFolder) {
}

void UGSE_ActorFuncLib::LoadCapturingStreamingMeshLodStats() {
}

bool UGSE_ActorFuncLib::IsPointInVolume(AVolume* VolumeActor, const FVector& Point, float Radius) {
    return false;
}

bool UGSE_ActorFuncLib::IsActorBeginningPlayFromLevelStreaming(AActor* Actor) {
    return false;
}

bool UGSE_ActorFuncLib::IsAABoundBoxInVolume(AVolume* VolumeActor, const FVector& BoundOrigin, const FVector& BoundExtent, bool& isFullContain) {
    return false;
}

void UGSE_ActorFuncLib::GetWorldTransformFast(USceneComponent* SceneComp, FTransform& OutWorldTransform) {
}

void UGSE_ActorFuncLib::GetVelocity(AActor* Actor, FVector& OutVelocity) {
}

void UGSE_ActorFuncLib::GetAttachParentActor(AActor* Actor, AActor* AttachParentActor) {
}

void UGSE_ActorFuncLib::GetActorTransformSimple(AActor* Actor, FTransform& OutTrans) {
}

void UGSE_ActorFuncLib::GetActorRotationSimple(AActor* Actor, FRotator& OutRot) {
}

void UGSE_ActorFuncLib::GetActorLocationSimple(AActor* Actor, FVector& OutPos) {
}

void UGSE_ActorFuncLib::GetActorHasAuthority(AActor* Actor, bool& OutHasAuthority) {
}

void UGSE_ActorFuncLib::GetActorForwardVector(AActor* Actor, FVector& OutDir) {
}

void UGSE_ActorFuncLib::FinishAddComponent(AActor* Actor, UActorComponent* NewActorComp, bool bManualAttachment, const FTransform& RelativeTransform) {
}

void UGSE_ActorFuncLib::ExcuteStreamingMeshMemoryStats() {
}

void UGSE_ActorFuncLib::EndCapturingStreamingMeshLodStats() {
}

void UGSE_ActorFuncLib::DetectRegionCenter(AActor* Actor, TArray<FVector> TraceDirectionList, float TraceDistance, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawTime, float VaildRange, FVector& AdjustedLocation, double& AdjustedRadius, bool& IsSuccess) {
}

bool UGSE_ActorFuncLib::CheckActorWasRecentlyRendered(AActor* Actor) {
    return false;
}

void UGSE_ActorFuncLib::CaptureStreamingMeshLodStats() {
}

void UGSE_ActorFuncLib::CacheCapturingStreamingMeshLodStats() {
}

void UGSE_ActorFuncLib::AddNamePrefix(AActor* Actor, const FString& NamePrefix) {
}

void UGSE_ActorFuncLib::AddInstanceComponent(AActor* Actor, UActorComponent* Component) {
}

UActorComponent* UGSE_ActorFuncLib::AddComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish) {
    return NULL;
}


