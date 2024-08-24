#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerPostEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerPostEvent : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Follow: 1;
    
    UBED_MovieNode_PerformerPostEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

