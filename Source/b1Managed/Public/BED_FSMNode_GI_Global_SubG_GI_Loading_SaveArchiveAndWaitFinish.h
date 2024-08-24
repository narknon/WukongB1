#pragma once
#include "CoreMinimal.h"
#include "ArchiveSaveSource.h"
#include "BED_FSMNode_SubGraph.h"
#include "BED_FSMNode_GI_Global_SubG_GI_Loading_SaveArchiveAndWaitFinish.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Global_SubG_GI_Loading_SaveArchiveAndWaitFinish : public UBED_FSMNode_SubGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ArchiveSaveSource ArchiveSaveSource;
    
public:
    UBED_FSMNode_GI_Global_SubG_GI_Loading_SaveArchiveAndWaitFinish();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateGraphNodeInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

