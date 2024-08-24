#pragma once
#include "CoreMinimal.h"
#include "PCGSubgraphSettings.h"
#include "PCGLoopSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGLoopSettings : public UPCGSubgraphSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoopPins;
    
    UPCGLoopSettings();

};

