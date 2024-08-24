#pragma once
#include "CoreMinimal.h"
#include "EGsNPCShowState.h"
#include "GsNPCUnitShowStateParamConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsNPCUnitShowStateParamConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCShowState ActualParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCShowState ModifyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCShowState DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsNPCShowState OutParam;
    
    FGsNPCUnitShowStateParamConfig();
};

