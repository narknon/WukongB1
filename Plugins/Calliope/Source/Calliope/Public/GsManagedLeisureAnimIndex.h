#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedLeisureAnimIndex.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedLeisureAnimIndex : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeisureAnimIndex;
    
    FGsManagedLeisureAnimIndex();
};

