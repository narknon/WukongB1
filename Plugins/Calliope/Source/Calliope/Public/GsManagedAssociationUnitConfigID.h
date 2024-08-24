#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedAssociationUnitConfigID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedAssociationUnitConfigID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfigID;
    
    FGsManagedAssociationUnitConfigID();
};

