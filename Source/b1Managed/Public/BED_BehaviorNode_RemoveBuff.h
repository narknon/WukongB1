#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_RemoveBuff.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_RemoveBuff : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerRemoveEffect: 1;
    
    UBED_BehaviorNode_RemoveBuff();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

