#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedSequenceID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedSequenceID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceID;
    
    FGsManagedSequenceID();
};

