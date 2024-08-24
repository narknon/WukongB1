#pragma once
#include "CoreMinimal.h"
#include "EGsOverlapManagePolice.h"
#include "EGsOverlapState.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsOverlapPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsOverlapPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapManagePolice ManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapState OutState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapManagePolice ActualManagePolice;
    
    FGsOverlapPoliceConfig();
};

