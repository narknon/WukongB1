#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BUAnimSettingsLocomotionEx.h"
#include "PatrolBlendSpaceSetting.h"
#include "BGWCharaterAnimMgrDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWCharaterAnimMgrDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUAnimSettingsLocomotionEx ExAS_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrolBlendSpaceSetting ExBS_Patrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUAnimSettingsLocomotionEx ExAS_EQSRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUAnimSettingsLocomotionEx ExAS_Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUAnimSettingsLocomotionEx ExAS_PowerStorage;
    
    UBGWCharaterAnimMgrDataAsset();

};

