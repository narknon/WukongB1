#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BUAnimInteractiveActor.generated.h"

class UAnimSequence;
class UBGWDataAsset_AnimInteractiveActorSetting;

UCLASS(Blueprintable, NonTransient)
class UBUAnimInteractiveActor : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AnimInteractiveActorSetting* ABPSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimIdle;
    
    UBUAnimInteractiveActor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
};

