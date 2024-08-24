#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_PlayerSetCloudMoveEnabled.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PlayerSetCloudMoveEnabled : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UBED_MovieNode_PlayerSetCloudMoveEnabled();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

