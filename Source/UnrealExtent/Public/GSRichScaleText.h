#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "GSRichTextBlock.h"
#include "GSRichScaleText.generated.h"

UCLASS(Blueprintable)
class UGSRichScaleText : public UGSRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSWidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSHeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMinDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMaxDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMinAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GSMaxAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSWidthOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSHeightOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMinDesiredWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMinDesiredHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMaxDesiredWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMaxDesiredHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMinAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_GSMaxAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> Stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreInheritedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UGSRichScaleText();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetGSWidthOverride(float InGSWidthOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMinDesiredWidth(float InGSMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMinDesiredHeight(float InGSMinDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMinAspectRatio(float InGSMinAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMaxDesiredWidth(float InGSMaxDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMaxDesiredHeight(float InGSMaxDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetGSMaxAspectRatio(float InGSMaxAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetGSHeightOverride(float InGSHeightOverride);
    
    UFUNCTION(BlueprintCallable)
    void ClearGSWidthOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMinDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMinDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMinAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMaxDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMaxDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSMaxAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearGSHeightOverride();
    
};

