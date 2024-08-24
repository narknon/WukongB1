#pragma once
#include "CoreMinimal.h"
#include "EGsSpawnerManagePolice.h"
#include "EGsSpawnerState.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsSpawnerPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsSpawnerPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerManagePolice ManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerManagePolice ActualManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerState OutState;
    
    FGsSpawnerPoliceConfig();
};

