#pragma once
#include "CoreMinimal.h"
#include "BED_ComboNode.h"
#include "ComboCondition.h"
#include "BED_ComboNode_Start.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ComboNode_Start : public UBED_ComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboCondition> ComboConditions;
    
    UBED_ComboNode_Start();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

