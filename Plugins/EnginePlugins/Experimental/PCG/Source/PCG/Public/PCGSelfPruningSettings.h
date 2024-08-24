#pragma once
#include "CoreMinimal.h"
#include "EPCGSelfPruningType.h"
#include "PCGSettings.h"
#include "PCGSelfPruningSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSelfPruningSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSelfPruningType PruningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusSimilarityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizedPruning;
    
    UPCGSelfPruningSettings();

};

