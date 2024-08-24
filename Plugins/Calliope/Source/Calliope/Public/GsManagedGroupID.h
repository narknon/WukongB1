#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedGroupID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedGroupID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractorGroupID;
    
    FGsManagedGroupID();
};

