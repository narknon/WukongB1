#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "ValueCompareOperationType.h"
#include "BAID_CheckSummonAmount.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckSummonAmount : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SummonResIDFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ValueCompareOperationType OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompareValue;
    
    UBAID_CheckSummonAmount();

};

