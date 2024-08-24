#pragma once
#include "CoreMinimal.h"
#include "BaseActorCompTickable.h"
#include "Templates/SubclassOf.h"
#include "BGUMotionMatchingDebugComp.generated.h"

class ABUTamerActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUMotionMatchingDebugComp : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABUTamerActor> TamerBP;
    
    UBGUMotionMatchingDebugComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Restart();
    
    UFUNCTION(BlueprintCallable)
    void StopDebugPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentInCS(float DeltaTime);
    
};

