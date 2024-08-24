#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GSFloatValueTableRow.generated.h"

USTRUCT(BlueprintType)
struct B1_API FGSFloatValueTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FGSFloatValueTableRow();
};

