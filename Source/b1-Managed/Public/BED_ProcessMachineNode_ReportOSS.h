#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "BED_ProcessMachineNode_ReportOSS.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_ReportOSS : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam TaskLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageNote;
    
    UBED_ProcessMachineNode_ReportOSS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

