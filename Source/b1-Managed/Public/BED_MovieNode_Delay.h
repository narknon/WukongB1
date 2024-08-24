#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_Delay.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NotPlaceable)
class UBED_MovieNode_Delay : public UBED_MovieNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeDilationCurve;
    
public:
    UBED_MovieNode_Delay();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

