#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GsManagedParamBase.h"
#include "GsManagedGroupUnitObjBase.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedGroupUnitObjBase : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedStateManaged;
    
    FGsManagedGroupUnitObjBase();
};

