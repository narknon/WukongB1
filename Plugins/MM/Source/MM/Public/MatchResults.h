#pragma once
#include "CoreMinimal.h"
#include "InputPlayerDirectionData.h"
#include "MatchResults.generated.h"

USTRUCT(BlueprintType)
struct MM_API FMatchResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPlayerDirectionData PlayersInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPlayerDirectionData PlayersPredictedInputData;
    
    FMatchResults();
};

