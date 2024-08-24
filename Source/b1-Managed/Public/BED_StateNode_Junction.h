#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_StateNode.h"
#include "BED_StateNode_Junction.generated.h"

UCLASS(Blueprintable)
class UBED_StateNode_Junction : public UBED_StateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JunctionState;
    
    UBED_StateNode_Junction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

