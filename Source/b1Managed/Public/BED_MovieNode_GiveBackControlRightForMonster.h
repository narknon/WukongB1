#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_GiveBackControlRightForMonster.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_GiveBackControlRightForMonster : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MonsterGuid;
    
    UBED_MovieNode_GiveBackControlRightForMonster();

};

