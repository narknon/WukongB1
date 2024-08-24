#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUDispInteractActor.generated.h"

class AActor;
class UBUS_InteractDrawConfigComp;

UCLASS(Blueprintable)
class ABGUDispInteractActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_InteractDrawConfigComp* InteractDrawConfigComp;
    
    ABGUDispInteractActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

