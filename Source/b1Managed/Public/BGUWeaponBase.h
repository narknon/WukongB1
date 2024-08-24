#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUWeaponBase.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABGUWeaponBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComp;
    
    ABGUWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponBPFunc(float FloatParam);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshNoCollision();
    
    UFUNCTION(BlueprintCallable)
    void Tool_ReadWriteTrans();
    
    UFUNCTION(BlueprintCallable)
    void Tool_SetRelativeTrans();
    
    UFUNCTION(BlueprintCallable)
    bool Tool_CheckBoxChildren();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponHasCollision();
    
};

