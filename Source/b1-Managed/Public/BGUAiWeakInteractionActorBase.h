#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUAiWeakInteractionActorBase.generated.h"

class UBGUDebugSectorComponent;
class UBUS_AiWeakInteractComp;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUAiWeakInteractionActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_AiWeakInteractComp* AiWeakInteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp;
    
    ABGUAiWeakInteractionActorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

