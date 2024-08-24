#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_ShowOrHiddenStreamingLevel.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_ShowOrHiddenStreamingLevel : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisible: 1;
    
    UBED_MovieNode_ShowOrHiddenStreamingLevel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

