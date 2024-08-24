#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_NotifyActor.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessStateNode_NotifyActor : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
public:
    UBED_ProcessStateNode_NotifyActor();

};

