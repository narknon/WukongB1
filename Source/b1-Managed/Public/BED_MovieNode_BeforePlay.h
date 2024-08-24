#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_Event.h"
#include "BED_MovieNode_BeforePlay.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NotPlaceable)
class UBED_MovieNode_BeforePlay : public UBED_MovieNode_Event {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAsyncTransBack: 1;
    
public:
    UBED_MovieNode_BeforePlay();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

