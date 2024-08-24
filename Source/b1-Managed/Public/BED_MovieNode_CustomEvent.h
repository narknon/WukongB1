#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_CustomEvent.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_CustomEvent : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UBED_MovieNode_CustomEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

