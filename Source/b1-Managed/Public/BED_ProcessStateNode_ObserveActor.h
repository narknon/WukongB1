#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "ObserveActorInfo.h"
#include "BED_ProcessStateNode_ObserveActor.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_ObserveActor : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObserveActorInfo ObserveActorInfo;
    
    UBED_ProcessStateNode_ObserveActor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

