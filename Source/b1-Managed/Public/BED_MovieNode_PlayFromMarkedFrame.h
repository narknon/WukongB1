#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_PlayFromMarkedFrame.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PlayFromMarkedFrame : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkedFrameLabel;
    
    UBED_MovieNode_PlayFromMarkedFrame();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

