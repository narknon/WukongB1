#pragma once
#include "CoreMinimal.h"
#include "EGsUnitManagePolice.h"
#include "EGsUnitResetType.h"
#include "GsSceneObjPoliceConfigBase.h"
#include "GsUnitPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsUnitPoliceConfig : public FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitManagePolice ManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitResetType State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitResetType DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitManagePolice ActualManagePolice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitResetType OutState;
    
    FGsUnitPoliceConfig();
};

