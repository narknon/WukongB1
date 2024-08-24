#pragma once
#include "CoreMinimal.h"
#include "GSInputAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FGSInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UNREALEXTENT_API FGSInputAxisKeyMapping();
};

