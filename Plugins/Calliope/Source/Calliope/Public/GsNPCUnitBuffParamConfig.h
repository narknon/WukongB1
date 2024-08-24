#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGsNPCBuffState.h"
#include "GsNPCUnitBuffParamConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsNPCUnitBuffParamConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCBuffState ActualParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCBuffState ModifyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCBuffState DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCBuffState OutParam;
    
    FGsNPCUnitBuffParamConfig();
};

