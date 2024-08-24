#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_PerformerAction.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_MovieNode_PerformerAction : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Performer;
    
    UBED_MovieNode_PerformerAction();

};

