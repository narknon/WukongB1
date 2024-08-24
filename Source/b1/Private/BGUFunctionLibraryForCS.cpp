#include "BGUFunctionLibraryForCS.h"

UBGUFunctionLibraryForCS::UBGUFunctionLibraryForCS() {
}

void UBGUFunctionLibraryForCS::ValidateMontagesForCrossSectionNS(const FString& ResourcePath) {
}

FGameplayTag UBGUFunctionLibraryForCS::RequestGameplayTag(FName TagName, bool ErrorIfNotFound) {
    return FGameplayTag{};
}

void UBGUFunctionLibraryForCS::RemoveAllQueriesByQuerier(UObject* Querier) {
}

void UBGUFunctionLibraryForCS::OnSetLevelsStateFinishedPlaceHolder(const FString& InTargetLevelsKeyword, const FString& InTargetLevelState, int32 InOperationID) {
}

void UBGUFunctionLibraryForCS::OnComponentHitPlaceholder(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector HitImpule, const FHitResult& Hit) {
}

void UBGUFunctionLibraryForCS::OnComponentEndOverlapPlaceholder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UBGUFunctionLibraryForCS::OnComponentBeginOverlapPlaceholder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UBGUFunctionLibraryForCS::OnAllSetLevelsStateFinishedPlaceHolder() {
}

void UBGUFunctionLibraryForCS::OnActorEndOverlapPlaceholder(AActor* OverlapActor, AActor* OtherActor) {
}

void UBGUFunctionLibraryForCS::OnActorBeginOverlapPlaceholder(AActor* OverlapActor, AActor* OtherActor) {
}

void UBGUFunctionLibraryForCS::CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision) {
}

TEnumAsByte<ECollisionChannel> UBGUFunctionLibraryForCS::ConvertTraceTypeToCollisionChannel(TEnumAsByte<ETraceTypeQuery> TraceType) {
    return ECC_WorldStatic;
}

TEnumAsByte<ETraceTypeQuery> UBGUFunctionLibraryForCS::ConvertToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return TraceTypeQuery1;
}

TEnumAsByte<EObjectTypeQuery> UBGUFunctionLibraryForCS::ConvertToObjectType(TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return ObjectTypeQuery1;
}

TEnumAsByte<ECollisionChannel> UBGUFunctionLibraryForCS::ConvertObjectTypeToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectType) {
    return ECC_WorldStatic;
}

bool UBGUFunctionLibraryForCS::CompForceUpdateOverlaps(UPrimitiveComponent* Comp, bool bDoNotifies) {
    return false;
}

void UBGUFunctionLibraryForCS::CallSectionManuallyChangeOnCrossSectionNotifies(ABGUCharacter* OwnerChar, const FName& NewSectionName) {
}

void UBGUFunctionLibraryForCS::BGUUnBindOnSetLevelsStateFinished(UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUUnBindOnComponentHitEvent(UPrimitiveComponent* Comp, UObject* Obj, FName Func) {
}

void UBGUFunctionLibraryForCS::BGUUnBindOnComponentEndOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUUnBindOnComponentBeginOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUUnBindOnAllSetLevelsStateFinished(UObject* Obj, FName FuncName) {
}

bool UBGUFunctionLibraryForCS::BGUTeleportTo(AActor* Owner, const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck) {
    return false;
}

UDecalComponent* UBGUFunctionLibraryForCS::BGUSpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan) {
    return NULL;
}

void UBGUFunctionLibraryForCS::BGUSliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial) {
}

void UBGUFunctionLibraryForCS::BGUSetParticleSysSortPriority(UParticleSystemComponent* ParticleSystemComp, int32 SortPriority) {
}

void UBGUFunctionLibraryForCS::BGUSetParticleSysCompPoolingMethod(UParticleSystemComponent* ParticleComp, EPSCPoolMethod PoolMethod) {
}

void UBGUFunctionLibraryForCS::BGUSetIKComponentValid(ACharacter* Character, bool NewValid) {
}

void UBGUFunctionLibraryForCS::BGUSetDecalSize(UDecalComponent* DecalComp, FVector Size) {
}

void UBGUFunctionLibraryForCS::BGURestartBT(ABGUAIController* AIController) {
}

bool UBGUFunctionLibraryForCS::BGURegistComp(UObject* WorldContextObject, UActorComponent* ActorComp) {
    return false;
}

float UBGUFunctionLibraryForCS::BGUMovementComponentSlideAlongSurface(UMovementComponent* MoveComp, const FVector& Delta, float Time, const FVector& Normal, const FHitResult& InHit, bool bHandleImpact, FHitResult& OutHit) {
    return 0.0f;
}

void UBGUFunctionLibraryForCS::BGUMovementComponentHandleImpact(UMovementComponent* MoveComp, const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta) {
}

bool UBGUFunctionLibraryForCS::BGUIsBlackBoardKeyTypeMatch(UBlackboardKeyType* BBKey, EBBKeyType BBKeyType) {
    return false;
}

UWorld* UBGUFunctionLibraryForCS::BGUGetUWorld(UObject* InnerObject) {
    return NULL;
}

void UBGUFunctionLibraryForCS::BGUGetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents) {
}

bool UBGUFunctionLibraryForCS::BGUGetParticleSystemIsLooping(const UParticleSystem* ParticleForPlay) {
    return false;
}

int32 UBGUFunctionLibraryForCS::BGUGetPARadiusByBoneName(UPhysicsAsset* PA, FName BoneName, float& BodyRadius) {
    return 0;
}

FVector2D UBGUFunctionLibraryForCS::BGUGetPaperSpriteSize(UPaperSprite* PaperSprite) {
    return FVector2D{};
}

int32 UBGUFunctionLibraryForCS::BGUGetMeshPredictedLODLevel(USkeletalMeshComponent* MeshComp) {
    return 0;
}

float UBGUFunctionLibraryForCS::BGUGetLevelSequenceLength(ULevelSequencePlayer* LeveleSequencePlayer) {
    return 0.0f;
}

float UBGUFunctionLibraryForCS::BGUGetLevelSequenceCurTime(ULevelSequencePlayer* LeveleSequencePlayer) {
    return 0.0f;
}

void UBGUFunctionLibraryForCS::BGUGetLandscapeExtent(ALandscape* Landscape, int32& MinX, int32& MinY, int32& MaxX, int32& MaxY) {
}

bool UBGUFunctionLibraryForCS::BGUGetIsRuntionShowCollision(UObject* WorldContextObject) {
    return false;
}

bool UBGUFunctionLibraryForCS::BGUGetIsInGameWorld(UObject* WorldContextObject) {
    return false;
}

bool UBGUFunctionLibraryForCS::BGUGetIsInEditorPreview(UObject* WorldContextObject) {
    return false;
}

bool UBGUFunctionLibraryForCS::BGUGetIsEditor() {
    return false;
}

bool UBGUFunctionLibraryForCS::BGUGetIsBuildShipping() {
    return false;
}

bool UBGUFunctionLibraryForCS::BGUGetFloatValueTableRow(UDataTable* DataTable, FName RowName, FGSFloatValueTableRow& Result, const FString& ContextString, bool bWarnIfRowMissing) {
    return false;
}

float UBGUFunctionLibraryForCS::BGUGetCurrentTime(UObject* WorldContextObject, bool& IsValid) {
    return 0.0f;
}

int32 UBGUFunctionLibraryForCS::BGUGetCurActiveMontageInstID(UAnimInstance* AnimInstance) {
    return 0;
}

void UBGUFunctionLibraryForCS::BGUGetBounds(UPrimitiveComponent* PrimComp, FVector& Origin, FVector& BoxExtent) {
}

float UBGUFunctionLibraryForCS::BGUGetBodyRadius(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bGetWelded) {
    return 0.0f;
}

TArray<AActor*> UBGUFunctionLibraryForCS::BGUGetAllActorsFromGroupActor(AActor* GroupActor, bool bRecurse) {
    return TArray<AActor*>();
}

bool UBGUFunctionLibraryForCS::BGUGetAIStimulusWasSuccessfullySensed(FAIStimulus Stimulus) {
    return false;
}

FString UBGUFunctionLibraryForCS::BGUGetActorLevelName(AActor* Unit) {
    return TEXT("");
}

void UBGUFunctionLibraryForCS::BGUExceutePyCode(const FString& PyPath) {
}

void UBGUFunctionLibraryForCS::BGUEnableActorTick(AActor* Actor, bool bEnable) {
}

void UBGUFunctionLibraryForCS::BguDrawSweepCheckShapeWithColor(const UWorld* World, const FVector& CenterPos, const FQuat& Rot, const FGSSweepCheckShapeInfo& SweepCheckShapeInfo, const FColor& Color) {
}

void UBGUFunctionLibraryForCS::BGUDrawSweepCheckShape(const UWorld* World, const FVector& CenterPos, const FQuat& Rot, const FGSSweepCheckShapeInfo& SweepCheckShapeInfo) {
}

void UBGUFunctionLibraryForCS::BguDrawSphereSweepWithColor(const UWorld* World, const FTransform& Start, const FTransform& End, float Radius, FColor Color) {
}

void UBGUFunctionLibraryForCS::BGUDrawSphereSweep(const UWorld* World, const FTransform& Start, const FTransform& End, float Radius) {
}

void UBGUFunctionLibraryForCS::BGUDrawLineArrowEx(const UWorld* World, const FVector& LineStart, const FVector& LineEnd, float ArrowSize, FColor Color, bool IsPersistentLines, float LifeTime) {
}

void UBGUFunctionLibraryForCS::BGUDrawLineArrow(const UWorld* World, const FVector& LineStart, const FVector& LineEnd, float ArrowSize) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugSphereEx(const UWorld* World, const FVector& CenterPos, float Raidus, float KeepTime, FColor Color) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugSphere(const UWorld* World, const FVector& CenterPos, float Raidus) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugRect(const UWorld* World, const FVector& CenterPos, const FVector& Direction, float Width, float Length) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugCircleEx(const UWorld* World, const FVector& CenterPos, float Raidus, float KeepTime, FColor Color) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugCircle(const UWorld* World, const FVector& CenterPos, float Raidus) {
}

void UBGUFunctionLibraryForCS::BGUDrawDebugAnnularSector(const UWorld* World, const FVector& CenterPos, const FVector& Direction, float InnerRadius, float OuterRadius, float HalfAngle, FColor Color, float Duration, float Thickness, int32 Segments) {
}

UTexture2D* UBGUFunctionLibraryForCS::BGUCreateLandscapeHeightMap(ALandscape* Landscape, const FString& PackageName, const FString& AssetName) {
    return NULL;
}

FVector UBGUFunctionLibraryForCS::BGUComputeActorHitMovePenetration(AActor* SelfActor, TArray<UHitMoveOverlapOtherActorCollisionsInfo*> OverlappedOtherActorInfos, float SelfWeight, FVector PlaneNormalVector, int32 MaxComputeRound, float Epsilon) {
    return FVector{};
}

void UBGUFunctionLibraryForCS::BGUBindOnSetLevelsStateFinished(UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUBindOnComponentHitEvent(UPrimitiveComponent* Comp, UObject* Obj, FName Func) {
}

void UBGUFunctionLibraryForCS::BGUBindOnComponentEndOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUBindOnComponentBeginOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUBindOnAllSetLevelsStateFinished(UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUBindOnActorEndOverlapEvent(AActor* Actor, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::BGUBindOnActorBeginOverlapEvent(AActor* Actor, UObject* Obj, FName FuncName) {
}

void UBGUFunctionLibraryForCS::AddNotifyPreloadedAsset(UObject* Notify, UObject* Asset) {
}


