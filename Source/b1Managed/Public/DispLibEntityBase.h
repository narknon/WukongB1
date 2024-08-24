#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBase.h"
#include "DispLibEntityBase.generated.h"

class UActorCompContainerCS;
class UActorDataContainer;

UCLASS(Blueprintable)
class ADispLibEntityBase : public ABGUActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    ADispLibEntityBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyWorldOffsetCS(const FVector& InOffset, bool bWorldShift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
};

