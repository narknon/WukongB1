#pragma once
#include "CoreMinimal.h"
#include "BGUDropItemActor.h"
#include "BGUDropItemActorCS.generated.h"

class UBUS_DropItemComp;

UCLASS(Blueprintable)
class ABGUDropItemActorCS : public ABGUDropItemActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DropItemComp* DropItemComp;
    
    ABGUDropItemActorCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropItemBPFunc(float FloatParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayDropEffect();
    
};

