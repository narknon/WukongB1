#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUDynamicSDFGenerator.generated.h"

class AActor;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUDynamicSDFGenerator : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachTo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_DynamicSDF_Generator;
    
public:
    ABGUDynamicSDFGenerator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

