#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUSpiderWebActorBase.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class ABGUSpiderWebActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WebComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleDistance;
    
    ABGUSpiderWebActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

