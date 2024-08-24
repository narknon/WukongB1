#pragma once
#include "CoreMinimal.h"
#include "EGsDynamicObstacleManagePolice.h"
#include "EGsDynamicObstacleState.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsDynamicObstaclePoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsDynamicObstaclePoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleManagePolice ManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleState OutState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleManagePolice ActualManagePolice;
    
    FGsDynamicObstaclePoliceConfig();
};

