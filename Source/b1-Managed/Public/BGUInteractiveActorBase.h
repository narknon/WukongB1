#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUInteractiveActorBase.generated.h"

class UBGUDebugSectorComponent;
class UBUS_InteractComp;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUInteractiveActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_InteractComp* InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp3;
    
    ABGUInteractiveActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallBPFunc();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitDestructible(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetDestructible(bool IsDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroyDestructible(FVector HitLocation, FVector ImpulseDir, float ImpulseStrength, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInteractDebugRange();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

