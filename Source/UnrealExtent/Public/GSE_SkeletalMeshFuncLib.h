#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GSE_SkeletalMeshFuncLib.generated.h"

class AActor;
class UMeshComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeletalMeshLODSettings;
class USkinnedMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SkeletalMeshFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SkeletalMeshFuncLib();

    UFUNCTION(BlueprintCallable)
    static void UpdateUROParams(AActor* OwnerActor, const TArray<float>& BaseVisibleDistanceFactorThesholds, int32 BaseNonRenderedUpdateRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpdateOverlapsOnAnimationFinalize(USkeletalMeshComponent* SKComp, bool bVal);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureParameterValueOnMaterials(UMeshComponent* MeshComp, const FName& ParameterName, UTexture* ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyInstanceShapeCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, int32 ShapeIndex, TEnumAsByte<ECollisionEnabled::Type> NewType, bool bUpdatePhysicsFilterData, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyInstanceCollisionProfileName(USkeletalMeshComponent* SkMeshComp, FName BoneName, FName InCollisionProfileName, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyInstanceCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, TEnumAsByte<ECollisionEnabled::Type> NewType, bool bUpdatePhysicsFilterData, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyInstanceAutoWeld(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bAutoWeld, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllBodiesShapeCollisionEnabled(const USkeletalMeshComponent* SKComp, TEnumAsByte<ECollisionEnabled::Type> Type, bool bUpdateFilterData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCPUAccess(USkeletalMesh* SKMesh);
    
    UFUNCTION(BlueprintCallable)
    static void GS_SetEndPhysicsTickEnabled(USkeletalMeshComponent* SKComp, bool bVal);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUROResult(AActor* OwnerActor, float& OutAccumulatedDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetRefPoseTransform(USkinnedMeshComponent* MeshComp, int32 BoneIndex, bool bIsLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumOverrideMaterials(const USkeletalMeshComponent* SKComp);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLODSettingsGroupNum(USkeletalMeshLODSettings* LODSettings);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ECollisionEnabled::Type> GetBodyInstanceShapeCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, int32 ShapeIndex, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static FName GetBodyInstanceCollisionProfileName(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static void BakeSkinInfoToUVs(USkeletalMesh* TargetSkeletalMesh);
    
};

