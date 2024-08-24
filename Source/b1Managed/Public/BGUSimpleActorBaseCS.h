#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGUActorBase.h"
#include "BGUSimpleActorBaseCS.generated.h"

class UActorCompContainerCS;
class UActorDataContainer;

UCLASS(Blueprintable)
class ABGUSimpleActorBaseCS : public ABGUActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    ABGUSimpleActorBaseCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
};

