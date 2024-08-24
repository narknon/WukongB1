#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGUDroppableDestructionActorBase.generated.h"

class UBUS_DestructibleConfigComp;
class UBUS_FXAudioEditComp;

UCLASS(Blueprintable)
class ABGUDroppableDestructionActorBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DestructibleConfigComp* DestructibleConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_FXAudioEditComp* FXAudioEditComp;
    
    ABGUDroppableDestructionActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFloatValueToMaterialAdvect(FName ParamName, float FloatValue);
    
};

