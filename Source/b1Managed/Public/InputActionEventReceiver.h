#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInputActionValueType.h"
#include "ETriggerEvent.h"
#include "EGSInputRichTextMarkUpType.h"
#include "GSInputTargetBinding.h"
#include "InputActionEventReceiver.generated.h"

class UInputAction;
class UTexture2D;

UCLASS(Blueprintable)
class UInputActionEventReceiver : public UGSInputTargetBinding {
    GENERATED_BODY()
public:
    UInputActionEventReceiver();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FetchDebugInfo(TArray<FString>& DebugLines, TArray<FColor>& DebugColors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionTrigger(const FString& ActionName, ETriggerEvent TriggerEvent, EInputActionValueType InputActionValueType, FVector InputActionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryGetInlineTexture(const FString& ActionTag, EGSInputRichTextMarkUpType MarkUpType, UTexture2D*& InlineTexture, UTexture2D*& InlineChordTexture, UTexture2D*& ConnectTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputDebuggerOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryGetTextureByAction(UInputAction* InputAction, float& Offset, UTexture2D*& Texture, int32& BgType, float& ChordOffset, UTexture2D*& ChordTexture, UTexture2D*& ConnectTexture, UTexture2D*& NoneTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryGetTextureInfoByName(const FString& Name, float& Offset, int32& BgType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRichTextInlineIconInfo(int32& BasePixelHeight, int32& BaselineOffset, int32& ConnectIconOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostApplicationActivationChanged(bool IsActive);
    
};

