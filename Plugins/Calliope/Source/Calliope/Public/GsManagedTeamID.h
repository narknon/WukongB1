#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedTeamID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedTeamID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamID;
    
    FGsManagedTeamID();
};

