#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BUAnimEquipPreview.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UBUAnimEquipPreview : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimIdle;
    
    UBUAnimEquipPreview();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
};

