#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BaseActorCompTickable.h"
#include "EGSSceneActorActivationType.h"
#include "FGSSceneActorActivationInfo.h"
#include "BUS_SceneInactiveActorComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SceneInactiveActorComp : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGSSceneActorActivationInfo> SceneActorActivationInfo;
    
    UBUS_SceneInactiveActorComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryAddActivationInfo(FFGSSceneActorActivationInfo ActivationInfo);
    
    UFUNCTION(BlueprintCallable)
    void TryRemoveActivationInfo(EGSSceneActorActivationType SceneActorActivationType, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayInCS(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFGSSceneActorActivationInfo> GetSceneActorActivationInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentInCS(float DeltaTime);
    
};

