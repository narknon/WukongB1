#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "ValueCompareType.h"
#include "BAID_CheckMaxComboValue.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckMaxComboValue : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ValueCompareType CompareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyValue;
    
    UBAID_CheckMaxComboValue();

};

