#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "UnitDeadPhysicsConfig.h"
#include "AutoTest_UnitDeadPhysicsCheckTool.generated.h"

class UBGWDataAsset_TamerListConfig;

UCLASS(Blueprintable)
class UAutoTest_UnitDeadPhysicsCheckTool : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TamerListConfig* TamerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnitDeadPhysicsConfig> Configs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UAutoTest_UnitDeadPhysicsCheckTool();

};

