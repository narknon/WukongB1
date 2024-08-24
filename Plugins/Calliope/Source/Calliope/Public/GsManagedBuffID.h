#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsSmartParamArray.h"
#include "GsManagedBuffID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedBuffID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParamArray NPCUnit;
    
    FGsManagedBuffID();
};

