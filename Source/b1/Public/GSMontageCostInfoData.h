#pragma once
#include "CoreMinimal.h"
#include "GSMontageCostInfoData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct B1_API FGSMontageCostInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NextMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostValue;
    
    FGSMontageCostInfoData();
};

