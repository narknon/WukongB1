#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGMetadataPartitionSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataPartitionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartitionAttribute;
    
    UPCGMetadataPartitionSettings();

};

