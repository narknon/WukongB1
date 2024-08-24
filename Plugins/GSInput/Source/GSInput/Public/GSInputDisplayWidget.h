#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "EInputDisplayType.h"
#include "GSInputDisplayWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSInputDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDisplayType InputDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey BindButtonKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey BindXKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey BindYKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowText_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowText_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoystickMoveLength;
    
    UGSInputDisplayWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetMousePos(FVector2D InMousePos);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetIsPress(bool InIsPress);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAxisValue(FKey InKey, float InAxisValue);
    
};

