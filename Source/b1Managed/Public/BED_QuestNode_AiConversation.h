#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_AiConversation.generated.h"

class ABGUCharacterCS;

UCLASS(Blueprintable)
class UBED_QuestNode_AiConversation : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam UnitOrPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AiConversationContentIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUCharacterCS> Caster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLocalPlayerAsCaster: 1;
    
    UBED_QuestNode_AiConversation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

