#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "EGSComboOnlyShowOneType.h"
#include "EGSInputIconShowType.h"
#include "GSInputActionIcon.generated.h"

class UInputAction;
class UTexture2D;

UCLASS(Blueprintable)
class GSINPUT_API UGSInputActionIcon : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRatioOnStopHold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InputIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> ExtraInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSInputIconShowType IconShowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSComboOnlyShowOneType ComboIconOnlyShowOneType;
    
public:
    UGSInputActionIcon();

    UFUNCTION(BlueprintCallable)
    void StopHold();
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(const float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetInputAction(UInputAction* NewInputAction);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void OpenPercentBg(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    void BeginHold(const float InTotalTime);
    
};

