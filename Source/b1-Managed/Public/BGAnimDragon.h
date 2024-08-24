#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "BGAnimDragon.generated.h"

class USplineComponent;

UCLASS(Blueprintable, NonTransient)
class UBGAnimDragon : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainRootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainEndName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> BonesRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> BonesLocCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectiveNumBones;
    
    UBGAnimDragon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintThreadSafeUpdateAnimation(float DeltaSeconds);
    
};

