#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "ChildActorActionInfo.h"
#include "TamerFamilyMatchChildInfo.h"
#include "BED_BehaviorNode_ControlChildActor.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_ControlChildActor : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTamerFamilyMatchChildInfo MatchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChildActorActionInfo ActionInfo;
    
    UBED_BehaviorNode_ControlChildActor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

