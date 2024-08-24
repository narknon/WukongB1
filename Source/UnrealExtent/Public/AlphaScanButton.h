#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "AlphaScanButton.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UNREALEXTENT_API UAlphaScanButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AdvancedHitTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdvancedHitAlpha;
    
    UAlphaScanButton();

    UFUNCTION(BlueprintCallable)
    void SetAdvancedHitTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetAdvancedHitAlpha(int32 InAlpha);
    
};

