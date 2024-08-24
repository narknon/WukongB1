#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerDirectionInput.h"
#include "InputPlayerDirectionData.generated.h"

USTRUCT(BlueprintType)
struct MM_API FInputPlayerDirectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerDirectionInput> DirectionalPointsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FinishVector;
    
    FInputPlayerDirectionData();
};

