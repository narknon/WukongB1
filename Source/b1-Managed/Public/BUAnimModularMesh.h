#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "BUAnimModularMesh.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UBUAnimModularMesh : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopCopyPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MappedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FakeInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedToInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInertiaFactor;
    
    UBUAnimModularMesh();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    
};

