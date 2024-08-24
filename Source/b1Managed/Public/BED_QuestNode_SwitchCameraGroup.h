#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_SwitchCameraGroup.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_SwitchCameraGroup : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraGroupId;
    
    UBED_QuestNode_SwitchCameraGroup();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

