#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedFollowPartnerConfigID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedFollowPartnerConfigID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfigID;
    
    FGsManagedFollowPartnerConfigID();
};

