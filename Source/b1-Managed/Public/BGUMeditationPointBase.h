#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGUMeditationPointBase.generated.h"

class UBUS_MeditationPointConfigComp;

UCLASS(Blueprintable)
class ABGUMeditationPointBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_MeditationPointConfigComp* MeditationPointConfigComp;
    
    ABGUMeditationPointBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

