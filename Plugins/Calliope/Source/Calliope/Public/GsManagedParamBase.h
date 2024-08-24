#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGsManagedParamType.h"
#include "GsManagedParamBase.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsManagedParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AliasName;
    
    FGsManagedParamBase();
};

