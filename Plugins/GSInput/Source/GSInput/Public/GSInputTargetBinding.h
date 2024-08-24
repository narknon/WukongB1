#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EInputActionValueType.h"
#include "ETriggerEvent.h"
#include "InputActionInstance.h"
#include "EGSInputRichTextMarkUpType.h"
#include "GSInputTargetBinding.generated.h"

class UInputAction;
class UTexture2D;

UCLASS(Blueprintable)
class UGSInputTargetBinding : public UObject {
    GENERATED_BODY()
public:
    UGSInputTargetBinding();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryGetTextureInfoByName(const FString& Name, float& Offset, int32& BgType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryGetTextureByAction(UInputAction* InputAction, float& Offset, UTexture2D*& Texture, int32& BgType, float& ChordOffset, UTexture2D*& ChordTexture, UTexture2D*& ConnectTexture, UTexture2D*& NoneTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryGetInlineTexture(const FString& ActionTag, const EGSInputRichTextMarkUpType MarkUpType, UTexture2D*& InlineTexture, UTexture2D*& InlineChordTexture, UTexture2D*& ConnectTexture);
    
    UFUNCTION(BlueprintCallable)
    void TriggeredActionListener(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void StartedActionListener(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostConsoleActivationStateChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostApplicationActivationChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OngoingActionListener(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputDebuggerOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionTrigger(const FString& ActionName, ETriggerEvent TriggerEvent, EInputActionValueType InputActionValueType, const FVector InputActionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRichTextInlineIconInfo(int32& BasePixelHeight, int32& BaselineOffset, int32& ConnectIconOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FetchDebugInfo(TArray<FString>& DebugLines, TArray<FColor>& DebugColors);
    
    UFUNCTION(BlueprintCallable)
    void CompletedActionListener(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void CanceledActionListener(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void ActionListener(const FInputActionInstance& ActionInstance);
    
};

