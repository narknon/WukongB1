#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_CustomInput.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_CustomInput : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UBED_QuestNode_CustomInput();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

