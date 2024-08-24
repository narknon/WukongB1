#pragma once
#include "CoreMinimal.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGMatchAndSetByAttributeEntry.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGMatchAndSetByAttributeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct ValueToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct Value;
    
    FPCGMatchAndSetByAttributeEntry();
};

