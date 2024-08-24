#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributePropertySelection.h"
#include "EPCGExtraProperties.h"
#include "EPCGPointProperties.h"
#include "PCGAttributePropertySelector.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributePropertySelection Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointProperties PointProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGExtraProperties ExtraProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExtraNames;
    
public:
    FPCGAttributePropertySelector();
};

