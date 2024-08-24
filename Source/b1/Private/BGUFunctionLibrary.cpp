#include "BGUFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UBGUFunctionLibrary::UBGUFunctionLibrary() {
}

FUStGSHitResult UBGUFunctionLibrary::WrapHitResult(FHitResult HitResult) {
    return FUStGSHitResult{};
}

bool UBGUFunctionLibrary::VolumeEncompassPoint(AVolume* Volume, const FVector& Point, float SphereRadius, float& OutDistanceToPoint) {
    return false;
}

void UBGUFunctionLibrary::SphereComponentInitRadius(USphereComponent* SphereComp, float Radius) {
}

void UBGUFunctionLibrary::SetLocalKinematics(USkeletalMeshComponent* TargetMesh, bool NewBool) {
}

void UBGUFunctionLibrary::SetIKValid(ACharacter* Character, bool NewValid) {
}

void UBGUFunctionLibrary::SetBodyBonePhysic(USkeletalMeshComponent* TargetMesh, FName BoneName, bool NewBool) {
}

void UBGUFunctionLibrary::SetAllBodiesBelowSimulatePhysics(USkeletalMeshComponent* TargetMesh, const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf, bool bSkipCustomPhysicsType) {
}

void UBGUFunctionLibrary::SerializeActorComponentToLevelActor(AActor* TargetLevelActor, UActorComponent* InActorComponent) {
}

void UBGUFunctionLibrary::RemoveLevelStreaming(UObject* WorldContextObject, const FName& LevelName) {
}

void UBGUFunctionLibrary::RemoveActorComponentFromLevelActor(AActor* TargetLevelActor, UActorComponent* InActorComponent) {
}

void UBGUFunctionLibrary::MoveLevel(UObject* WorldContextObject, const FName& LevelName, FVector InWorldOffset, bool bActorOnly) {
}

FName UBGUFunctionLibrary::MakeUniqueTamerMonsterName(ULevel* SpawnLevel, FName InBaseName) {
    return NAME_None;
}

FBox UBGUFunctionLibrary::GetStreamingVolumeBounds(ULevelStreaming* LevelStreaming) {
    return FBox{};
}

ACharacter* UBGUFunctionLibrary::GetPlayerCharacter(UObject* WorldContextObject) {
    return NULL;
}

FName UBGUFunctionLibrary::GetNearestBoneName(USkeletalMeshComponent* TargetSkeletalMesh, const FVector& WorldPosition, TArray<FString> OptionalWhiteList) {
    return NAME_None;
}

uint8 UBGUFunctionLibrary::GetLevelStreamingState(UObject* WorldContextObject, const FName& LevelName) {
    return 0;
}

FTransform UBGUFunctionLibrary::GetLevelStreamingLevelTransformByName(UObject* WorldContextObject, const FName& LevelName) {
    return FTransform{};
}

TArray<ULevelStreaming*> UBGUFunctionLibrary::GetLevelStreamingFromWorld(const UWorld* World) {
    return TArray<ULevelStreaming*>();
}

TArray<ULevelStreaming*> UBGUFunctionLibrary::GetLevelStreaming(UObject* WorldContextObject) {
    return TArray<ULevelStreaming*>();
}

FName UBGUFunctionLibrary::GetAssetLongPackageName(const FName& ClassName, const FString& AssetName) {
    return NAME_None;
}

TArray<FName> UBGUFunctionLibrary::GetAllAssetReference(FName SelectedPackageName) {
    return TArray<FName>();
}

TArray<FName> UBGUFunctionLibrary::GetAllAssetDependencies(FName SelectedPackageName) {
    return TArray<FName>();
}

TArray<AActor*> UBGUFunctionLibrary::GetAllActorsInWorld(UWorld* World) {
    return TArray<AActor*>();
}

TArray<AActor*> UBGUFunctionLibrary::GetAllActorsInLevel(ULevel* Level) {
    return TArray<AActor*>();
}

void UBGUFunctionLibrary::ForceLoadTileLOD(UObject* WorldContext, const FString& TileName, int32 SwitchOn) {
}

void UBGUFunctionLibrary::DrawDebugString(const UObject* WorldContextObject, const FVector TextLocation, const FString& Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration) {
}

void UBGUFunctionLibrary::CalculateMontageCostValue(const TArray<UAnimMontage*> MontageList, const TArray<FName> BoneNameList) {
}

TArray<FName> UBGUFunctionLibrary::BonesSphereMask(USkeletalMeshComponent* TargetSkeletalMesh, float Radius, FVector WorldPosition) {
    return TArray<FName>();
}

void UBGUFunctionLibrary::BGUWoodTestCharacter(AActor* Character, UAnimMontage* Montage, float ScaleRate) {
}

void UBGUFunctionLibrary::BGUUpdateLevelStreaming(UWorld* CurWorld) {
}

void UBGUFunctionLibrary::BGUUnloadStreamLevel(UObject* WorldContextObject, const FName& LevelName, bool bShouldBlockOnUnload, UObject* CallbackTarget, const FName& CallbackFunc, int32 ActionID, int32 Linkage) {
}

bool UBGUFunctionLibrary::BGUSKMeshContainSocket(USkeletalMeshComponent* SkMeshComp, FName SocketName) {
    return false;
}

bool UBGUFunctionLibrary::BGUShapeSweepMultiByObjectType(const UShapeComponent* ShapeComp, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, TArray<FHitResult>& OutHits, bool bIgnoreSelf) {
    return false;
}

void UBGUFunctionLibrary::BGUSetValueToCurveVector(UCurveVector* CurveVector, float Key, FVector Value, TEnumAsByte<ERichCurveInterpMode> InterpMode) {
}

void UBGUFunctionLibrary::BGUSetValueToCurveFloat(UCurveFloat* CurveFloat, float Key, float Value, TEnumAsByte<ERichCurveInterpMode> InterpMode) {
}

void UBGUFunctionLibrary::BGUSetTressFXAssetAndMaterial(UTressFXComponent* TFXComp, UTressFXAsset* Asset, UMaterialInstance* Material) {
}

void UBGUFunctionLibrary::BGUSetLinearColorParameterValueToMesh(UMeshComponent* MeshInst, const FName ParameterName, const FLinearColor LinearColorParameterValue) {
}

void UBGUFunctionLibrary::BGUSetEnableGravity(USkeletalMeshComponent* TargetMesh, bool bEnableGravity) {
}

bool UBGUFunctionLibrary::BGUSetActiveMontagePosition(const ABGUCharacter* Character, const UAnimMontage* Montage, const float position) {
    return false;
}

bool UBGUFunctionLibrary::BGUSeparatingAxisPointCheck(const TArray<FVector>& InPolyVertices, const FVector& InBoxCenter, const FVector& InBoxExtent, bool bInCalcLeastPenetration) {
    return false;
}

void UBGUFunctionLibrary::BGUSaveUnitAttrToFile(const FString& Name, const FString& Text, bool Overwrite) {
}

void UBGUFunctionLibrary::BGUResetToDefaultBoomCameraLagSpeed(AActor* PlayerCharacter) {
}

void UBGUFunctionLibrary::BGUResetGeometryCollectionComponent(UGeometryCollectionComponent* GeometryCollectionComponent) {
}

void UBGUFunctionLibrary::BGUResetActorVelocity(AActor* Actor) {
}

void UBGUFunctionLibrary::BGURenameActorComponent(UActorComponent* Comp, const FString& NewName) {
}

bool UBGUFunctionLibrary::BGUProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return false;
}

void UBGUFunctionLibrary::BGUProcessLatentActions(UObject* WorldContextObject, UObject* InObject, float DeltaTime) {
}

void UBGUFunctionLibrary::BGUPlayerCtrlerGetViewPoint(APlayerController* PlayerCtrler, FVector& out_Location, FRotator& out_Rotation) {
}

float UBGUFunctionLibrary::BGUPerlinNoise1D(float Value) {
    return 0.0f;
}

bool UBGUFunctionLibrary::BGUNavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier) {
    return false;
}

void UBGUFunctionLibrary::BGUNavigationCalPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, AController* Querier) {
}

bool UBGUFunctionLibrary::BGUMergeSkeletalMesh(USkeletalMesh* InMergeMesh, const TArray<USkeletalMesh*>& InSrcMeshList, int32 StripTopLODS, EMeshBufferAccess MeshBufferAccess) {
    return false;
}

void UBGUFunctionLibrary::BGULoadStreamLevel(UObject* WorldContextObject, const FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, UObject* CallbackTarget, const FName& CallbackFunc, int32 ActionID, int32 Linkage) {
}

bool UBGUFunctionLibrary::BGUIsExistFile(const FString& Path) {
    return false;
}

bool UBGUFunctionLibrary::BGUHasFuncName(FName FuncName, UObject* Object, UClass* StopAtClass) {
    return false;
}

void UBGUFunctionLibrary::BGUGetWindParameters_GameThread(AActor* WorldContext, FVector& position, FVector& OutDirection, float& OutSpeed, float& OutMinGustAmt, float& OutMaxGustAmt) {
}

int32 UBGUFunctionLibrary::BGUGetTeamID(AActor* Unit) {
    return 0;
}

int32 UBGUFunctionLibrary::BGUGetSkeletalMeshSimulatedBodiesBelowNum(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool bIncludeSelf) {
    return 0;
}

float UBGUFunctionLibrary::BGUGetMontageSectionTimeLeftFromPos(AActor* Unit, UAnimMontage* AnimMontage, float position) {
    return 0.0f;
}

bool UBGUFunctionLibrary::BGUGetMontageSectionStartAndEndTime(UAnimMontage* AnimMontage, FName SectionName, float& OutStartTime, float& OutEndTime) {
    return false;
}

float UBGUFunctionLibrary::BGUGetMontageSectionLengthByName(AActor* Unit, UAnimMontage* AnimMontage, FName SectionName) {
    return 0.0f;
}

float UBGUFunctionLibrary::BGUGetMontageSectionLengthByIndex(AActor* Unit, UAnimMontage* AnimMontage, int32 Index) {
    return 0.0f;
}

AActor* UBGUFunctionLibrary::BGUGetHitResultActor(const FActorInstanceHandle& ActorInstanceHandle) {
    return NULL;
}

bool UBGUFunctionLibrary::BGUGetAllActorsWithTagInRangeSorted(AActor* CenterActor, FName TagName, int32 Range, TArray<AActor*>& OutActors) {
    return false;
}

float UBGUFunctionLibrary::BGUGetActiveMontagePosition(const ABGUCharacter* Actor, const UAnimMontage* Montage) {
    return 0.0f;
}

ULevelStreaming* UBGUFunctionLibrary::BGUGenProceduralLevel(UObject* WorldContextObject, const FName& WorldAssetName, const FName& InLevelName, FTransform InLevelTransform) {
    return NULL;
}

UActorComponent* UBGUFunctionLibrary::BGUGenComponentAndAdd(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass) {
    return NULL;
}

UActorComponent* UBGUFunctionLibrary::BGUGenComponent(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass) {
    return NULL;
}

void UBGUFunctionLibrary::BGUFlushLevelStreamingOnlyVisibility(UObject* WorldContextObject) {
}

AActor* UBGUFunctionLibrary::BGUFinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform) {
    return NULL;
}

AActor* UBGUFunctionLibrary::BGUFindFirstActorWithTag(const UObject* WorldContextObject, FName TagName) {
    return NULL;
}

void UBGUFunctionLibrary::BGUCalcBounds(UPrimitiveComponent* StaticMesh, FVector& Origin, FVector& BoxExtent, float& SphereRadius) {
}

AActor* UBGUFunctionLibrary::BGUBeginDeferredActorSpawnFromClassWithName(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, FName ActorName, ULevel* OverrideLevel) {
    return NULL;
}

AActor* UBGUFunctionLibrary::BGUBeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

void UBGUFunctionLibrary::BGUActorUpdateAllTFXComp(AActor* Actor) {
}

void UBGUFunctionLibrary::ApplyLevelTransform(UObject* WorldContextObject, const FName& LevelName, FTransform LevelTransform) {
}

FName UBGUFunctionLibrary::AddLevelStreaming(UObject* WorldContextObject, const FName& LevelName, const FVector Location, const FRotator Rotation, bool bShouldBlockOnLoad) {
    return NAME_None;
}


