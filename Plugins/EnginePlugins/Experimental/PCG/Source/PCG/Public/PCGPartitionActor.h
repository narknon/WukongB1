#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorPartition/PartitionActor.h"
#include "PCGPartitionActor.generated.h"

class UPCGComponent;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class APCGPartitionActor : public APartitionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PCGGuid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<UPCGComponent*, TSoftObjectPtr<UPCGComponent>> LocalToOriginal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PCGGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2DGrid;
    
public:
    APCGPartitionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGComponent* GetOriginalComponent(const UPCGComponent* LocalComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGComponent* GetLocalComponent(const UPCGComponent* OriginalComponent) const;
    
};

