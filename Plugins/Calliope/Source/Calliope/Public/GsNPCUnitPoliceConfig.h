#pragma once
#include "CoreMinimal.h"
#include "GsNPCUnitBuffParamConfig.h"
#include "GsNPCUnitGuidParamConfig.h"
#include "GsNPCUnitIntParamConfig.h"
#include "GsNPCUnitShowStateParamConfig.h"
#include "GsNPCUnitSmartParamConfig.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsNPCUnitPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsNPCUnitPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitIntParamConfig ManagedTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitSmartParamConfig ManagedTeamIDParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitIntParamConfig ManagedIdleAMIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitSmartParamConfig ManagedIdleAMIdxParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitIntParamConfig ManagedLeisureAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitSmartParamConfig ManagedLeisureAnimIndexParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitIntParamConfig ManagedInteractGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitSmartParamConfig ManagedInteractGroupIDParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitShowStateParamConfig ManagedShowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsNPCUnitGuidParamConfig ManagedActiveInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsNPCUnitBuffParamConfig> ManagedBuffIDList;
    
    FGsNPCUnitPoliceConfig();
};

