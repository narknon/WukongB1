#pragma once
#include "CoreMinimal.h"
#include "BaseActorCompTickable.h"
#include "EGSHitDestructibleStrengthLevel.h"
#include "BUS_PerformerDestructibleDestroyComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_PerformerDestructibleDestroyComp : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSHitDestructibleStrengthLevel HitStrengthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitShapeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsNeedDrawDebug: 1;
    
    UBUS_PerformerDestructibleDestroyComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDestroyDestructible(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentInCS(float DeltaTime);
    
};

