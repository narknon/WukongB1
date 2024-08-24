#pragma once
#include "CoreMinimal.h"
#include "PCGBaseSubgraphSettings.h"
#include "PCGSubgraphSettings.generated.h"

class UPCGGraphInstance;
class UPCGGraphInterface;

UCLASS(Blueprintable)
class PCG_API UPCGSubgraphSettings : public UPCGBaseSubgraphSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGGraphInstance* SubgraphInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphInterface* SubgraphOverride;
    
    UPCGSubgraphSettings();

};

