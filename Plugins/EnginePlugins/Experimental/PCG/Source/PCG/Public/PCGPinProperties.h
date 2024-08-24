#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.h"
#include "PCGPinProperties.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGPinProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataType AllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedPin;
    
    FPCGPinProperties();
};

