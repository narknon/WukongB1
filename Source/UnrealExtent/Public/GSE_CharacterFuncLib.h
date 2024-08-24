#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "GSE_CharacterFuncLib.generated.h"

class AActor;
class ACharacter;
class AController;
class UCharacterMovementComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_CharacterFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_CharacterFuncLib();

    UFUNCTION(BlueprintCallable)
    static void ToggleActorTickEnabled(AActor* InActor, bool bEnable, bool ToggleActorTick, bool ToggleMoveComp, bool ToggleAIComp, bool ToggleSKMeshComp, bool ToggleAkComp, bool ToggleINCLUDE_CHILD_ACTOR);
    
    UFUNCTION(BlueprintCallable)
    static void Tick(AActor* Actor, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetMontagePlayRate(ACharacter* Character, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalScreenPercentageIfLocalController(AActor* Actor, AController* Controller, float ScreenPercentage, float& OutLocalScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimRootMotionTranslationScale(ACharacter* Character, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllPABodiesBelowResponseToChannels(USkeletalMeshComponent* Mesh, const FName& BoneName, const TArray<TEnumAsByte<ECollisionChannel>>& Channels, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllPABodiesBelowResponseToAllChannels(USkeletalMeshComponent* Mesh, const FName& BoneName, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorSKMeshesUpdateRateOptimizations(AActor* Actor, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void RecreatePhysicsState(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetSocketTransform(USceneComponent* Comp, const FName& SocketName, TEnumAsByte<ERelativeTransformSpace> TransfromSpace);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetSocketRotation(USceneComponent* Comp, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetSocketLocation(USceneComponent* Comp, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetSceneComponentTransformByName(AActor* Actor, const FString& ComponentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetSceneComponentByName(AActor* Actor, const FString& ComponentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPathFollowingBrakingDistance(UCharacterMovementComponent* CharacterMovement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBoneTransformByMesh(USkeletalMeshComponent* Mesh, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBoneTransform(ACharacter* Character, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable)
    static float GetActorBoundingSphereRadius(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateScreenPercentageFromController(AActor* Actor, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateMaxDistanceFactor(AActor* Actor);
    
};

