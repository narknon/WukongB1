#pragma once
#include "CoreMinimal.h"
#include "ArteriesActor.h"
#include "Engine/EngineTypes.h"
#include "GSArteriesIteractType.h"
#include "GSEArteriesActor.generated.h"

class UGSEArteriesBoxComponent;
class UGSEArteriesSplineComponent;

UCLASS(Blueprintable)
class GSEARTERIES_API AGSEArteriesActor : public AArteriesActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> MobilityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GSArteriesIteractType InteractType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSEArteriesSplineComponent* GSEArteriesSplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSEArteriesBoxComponent* GSEArteriesBoxComp;
    
public:
    AGSEArteriesActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMobility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractComp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHISMCollision();
    
    UFUNCTION(BlueprintCallable)
    void SetSplineUnitLength(float Length);
    
    UFUNCTION(BlueprintCallable)
    bool CloseSplineAndBuild(float CloseDistance);
    
};

