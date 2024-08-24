#pragma once
#include "CoreMinimal.h"
#include "EGsStreamingLevelManagePolice.h"
#include "EGsStreamingLevelState.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsStreamingLevelPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsStreamingLevelPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelManagePolice ManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelManagePolice ActualManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelState OutState;
    
    FGsStreamingLevelPoliceConfig();
};

