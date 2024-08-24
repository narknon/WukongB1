#pragma once
#include "CoreMinimal.h"
#include "BED_ComboNode_State.h"
#include "BED_ComboNode_Skill.generated.h"

UCLASS(Blueprintable)
class UBED_ComboNode_Skill : public UBED_ComboNode_State {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillMappingRuleIDList;
    
    UBED_ComboNode_Skill();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

