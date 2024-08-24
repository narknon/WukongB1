#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArteriesElement.h"
#include "ArteriesPoint.generated.h"

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesPoint : public FArteriesElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    FArteriesPoint();
};

