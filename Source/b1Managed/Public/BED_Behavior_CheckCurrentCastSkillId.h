#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode.h"
#include "BED_Behavior_CheckCurrentCastSkillId.generated.h"

UCLASS(Blueprintable)
class UBED_Behavior_CheckCurrentCastSkillId : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillIds;
    
    UBED_Behavior_CheckCurrentCastSkillId();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

