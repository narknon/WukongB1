#pragma once
#include "CoreMinimal.h"
#include "BGUAIPlayerController.h"
#include "BGP_AIPlayerControllerCS.generated.h"

class UActorCompContainerCS;
class UActorDataContainer;
class UBPS_GSEventCollection;

UCLASS(Blueprintable)
class ABGP_AIPlayerControllerCS : public ABGUAIPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBPS_GSEventCollection* EventCollection;
    
public:
    ABGP_AIPlayerControllerCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GSRpcSendServer(TArray<uint8> SendData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void GSRpcSendClient(TArray<uint8> SendData);
    
};

