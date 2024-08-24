#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_Timer.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_Timer : public UBED_MovieNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepTime;
    
public:
    UBED_MovieNode_Timer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

