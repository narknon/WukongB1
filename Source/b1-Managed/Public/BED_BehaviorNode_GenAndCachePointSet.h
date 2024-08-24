#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "PointsGenExtParam.h"
#include "PointsGenType.h"
#include "BED_BehaviorNode_GenAndCachePointSet.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_GenAndCachePointSet : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PointsGenType GenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointsGenExtParam GenExtParam;
    
    UBED_BehaviorNode_GenAndCachePointSet();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

