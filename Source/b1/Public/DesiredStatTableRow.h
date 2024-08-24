#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DesiredStatTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDesiredStatTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    B1_API FDesiredStatTableRow();
};

