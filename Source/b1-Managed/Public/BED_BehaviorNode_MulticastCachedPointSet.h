#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_MulticastCachedPointSet.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_MulticastCachedPointSet : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestID;
    
    UBED_BehaviorNode_MulticastCachedPointSet();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

