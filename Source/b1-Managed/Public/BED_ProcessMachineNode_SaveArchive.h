#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "BED_ProcessMachineNode_SaveArchive.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessMachineNode_SaveArchive : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArchiveLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam ArchiveLabelParam;
    
    UBED_ProcessMachineNode_SaveArchive();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

