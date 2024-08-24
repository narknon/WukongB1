#pragma once
#include "CoreMinimal.h"
#include "BED_ComboNode.h"
#include "ComboCondition.h"
#include "BED_ComboNode_Condition.generated.h"

UCLASS(Blueprintable)
class UBED_ComboNode_Condition : public UBED_ComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboCondition> ComboConditions;
    
    UBED_ComboNode_Condition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

