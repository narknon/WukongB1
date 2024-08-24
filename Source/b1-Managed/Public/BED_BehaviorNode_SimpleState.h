#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "EBGUSimpleState.h"
#include "BED_BehaviorNode_SimpleState.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_BehaviorNode_SimpleState : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUSimpleState SimpleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAdd: 1;
    
    UBED_BehaviorNode_SimpleState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

