#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "GameplayTagContainer.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_NotifyActor.generated.h"

class ABGUActorBaseCS;
class ABGUCharacterCS;

UCLASS(Blueprintable)
class UBED_QuestNode_NotifyActor : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam NotifySceneActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUActorBaseCS> NotifyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUCharacterCS> NotifyUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotifyActorGuid;
    
    UBED_QuestNode_NotifyActor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

