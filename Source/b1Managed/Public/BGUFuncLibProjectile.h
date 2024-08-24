#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuffAndSkillEffectType.h"
#include "ProjectileCheckShapeType.h"
#include "BGUFuncLibProjectile.generated.h"

class AActor;
class ABGUCharacterCS;
class ABGUProjectileBaseActor;
class UBlueprint;

UCLASS(Blueprintable)
class UBGUFuncLibProjectile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibProjectile();

    UFUNCTION(BlueprintCallable)
    static int32 GetProjectileType(int32 ProjectileID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<BuffAndSkillEffectType> GetBuffEffectTypes(int32 BuffID);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCtrProjectileByID(ABGUCharacterCS* CurCharacter, int32 ProjectileID);
    
    UFUNCTION(BlueprintCallable)
    static void CheckCompHasChildComp(TArray<FString>& ErrorBPPathList);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> CheckBuffUsedInBullet();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckOutAllProjectileBP(FString& CheckOutMap);
    
    UFUNCTION(BlueprintCallable)
    static bool FindProjectileAboutFlame(FString& ErrorLog);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> CheckBuffDispUsedInBullet();
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectileAssetCheck_Full(FString& ErrorLog, TArray<FString>& MarkDirtyList);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectileAssetCheck_Single(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, FString& ErrorLog, bool bNeedLoadData);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateCheckCompForProjectile(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, ProjectileCheckShapeType CheckShape, FString& ErrorLog, bool bNeedLoadData);
    
    UFUNCTION(BlueprintCallable)
    static bool ModifyProjectileCheckShapeType(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, ProjectileCheckShapeType CheckShape, FString& ErrorLog);
    
    UFUNCTION(BlueprintCallable)
    static FString CheckEffectsUsedInBulletExpand();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateInteractCompForProjectile(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, FString& ErrorLog);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectileAssetMoveCompToBP_Full(FString& ErrorLog);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectileAssetMoveCompToBP_Single(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, FString& ErrorLog, bool bNeedLoadData);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllProjectileBPPathFromDesc_with_C(TArray<FString>& CurrentUsedBPPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllProjectileBPPathFromDesc_without_C(TArray<FString>& CurrentUsedBPPath);
    
};

