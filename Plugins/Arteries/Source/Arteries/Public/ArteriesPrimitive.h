#pragma once
#include "CoreMinimal.h"
#include "ArteriesElement.h"
#include "ArteriesPrimitive.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesPrimitive : public FArteriesElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClosed: 1;
    
    FArteriesPrimitive();
};

