#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PostAkEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UBED_QuestNode_PostAkEvent : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkEvent;
    
    UBED_QuestNode_PostAkEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

