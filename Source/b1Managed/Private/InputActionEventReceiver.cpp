#include "InputActionEventReceiver.h"

UInputActionEventReceiver::UInputActionEventReceiver() {
}

void UInputActionEventReceiver::FetchDebugInfo_Implementation(TArray<FString>& DebugLines, TArray<FColor>& DebugColors) {
}

void UInputActionEventReceiver::InputActionTrigger_Implementation(const FString& ActionName, ETriggerEvent TriggerEvent, EInputActionValueType InputActionValueType, FVector InputActionValue) {
}

bool UInputActionEventReceiver::TryGetInlineTexture_Implementation(const FString& ActionTag, EGSInputRichTextMarkUpType MarkUpType, UTexture2D*& InlineTexture, UTexture2D*& InlineChordTexture, UTexture2D*& ConnectTexture) {
    return false;
}

bool UInputActionEventReceiver::IsInputDebuggerOpen_Implementation() {
    return false;
}

bool UInputActionEventReceiver::TryGetTextureByAction_Implementation(UInputAction* InputAction, float& Offset, UTexture2D*& Texture, int32& BgType, float& ChordOffset, UTexture2D*& ChordTexture, UTexture2D*& ConnectTexture, UTexture2D*& NoneTexture) {
    return false;
}

bool UInputActionEventReceiver::TryGetTextureInfoByName_Implementation(const FString& Name, float& Offset, int32& BgType) {
    return false;
}

void UInputActionEventReceiver::GetRichTextInlineIconInfo_Implementation(int32& BasePixelHeight, int32& BaselineOffset, int32& ConnectIconOffset) {
}

void UInputActionEventReceiver::PostApplicationActivationChanged_Implementation(bool IsActive) {
}


