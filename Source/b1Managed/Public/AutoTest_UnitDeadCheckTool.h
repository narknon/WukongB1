#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "AutoTest_UnitDeadCheckTool.generated.h"

class UBGWDataAsset_TamerListConfig;

UCLASS(Blueprintable)
class UAutoTest_UnitDeadCheckTool : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TamerListConfig* TamerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Buff;
    
    UAutoTest_UnitDeadCheckTool();

};

