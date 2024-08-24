#pragma once
#include "CoreMinimal.h"
#include "EGsUnitResetType.h"
#include "GsManagedGroupUnitObjBase.h"
#include "GsManagedGroupUnit.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedGroupUnit : public FGsManagedGroupUnitObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitResetType State;
    
    FGsManagedGroupUnit();
};

