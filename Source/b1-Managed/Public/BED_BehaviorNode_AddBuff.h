#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_AddBuff.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_AddBuff : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffDuration;
    
    UBED_BehaviorNode_AddBuff();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

