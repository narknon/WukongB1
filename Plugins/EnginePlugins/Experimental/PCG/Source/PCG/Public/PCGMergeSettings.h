#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGMergeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMergeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeMetadata;
    
    UPCGMergeSettings();

};

