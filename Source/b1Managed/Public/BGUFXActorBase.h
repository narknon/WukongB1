#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUFXActorBase.generated.h"

class UBUS_DestructibleConfigComp;
class UBUS_FXActorBaseConfigComp;
class UBUS_FXAudioEditComp;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUFXActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_FXActorBaseConfigComp* FXActorBaseConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DestructibleConfigComp* DestructibleConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_FXAudioEditComp* FXAudioEditComp;
    
    ABGUFXActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitDestructible(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetDestructible(bool IsDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroyDestructible(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFloatValueToMaterialAdvect(FName ParamName, float FloatValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

