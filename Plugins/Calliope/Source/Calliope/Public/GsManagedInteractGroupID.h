#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedInteractGroupID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedInteractGroupID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractGroupID;
    
    FGsManagedInteractGroupID();
};

