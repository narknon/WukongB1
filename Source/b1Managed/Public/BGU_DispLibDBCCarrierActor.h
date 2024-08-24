#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBase.h"
#include "BGU_DispLibDBCCarrierActor.generated.h"

class UActorCompContainerCS;
class UActorDataContainer;

UCLASS(Blueprintable)
class ABGU_DispLibDBCCarrierActor : public ABGUActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    ABGU_DispLibDBCCarrierActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyWorldOffsetCS(const FVector& InOffset, bool bWorldShift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
};

