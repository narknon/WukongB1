#include "GSE_InputFuncLib.h"

UGSE_InputFuncLib::UGSE_InputFuncLib() {
}

void UGSE_InputFuncLib::UpdateAllInputIcon() {
}

void UGSE_InputFuncLib::UnRegisterInputTargetBinding(UGSInputTargetBinding* InputTargetBindingObj) {
}

void UGSE_InputFuncLib::UnRegisterGSInputProc(const UObject* WorldContext, EGSInputProcOrder Order) {
}

bool UGSE_InputFuncLib::TryToSetContextNewPriority(APlayerController* PlayerController, const UInputMappingContext* Context, int32 NewPriority) {
    return false;
}

void UGSE_InputFuncLib::SetUIOnly(APlayerController* PlayerController, bool bNeedMouseCapture) {
}

void UGSE_InputFuncLib::SetMouseCursorPosition(FVector2D position) {
}

void UGSE_InputFuncLib::SetIgnoreAllButtonKeyInput(const UObject* WorldContext, bool IsIgnore) {
}

void UGSE_InputFuncLib::SetGameOnly(APlayerController* PlayerController) {
}

void UGSE_InputFuncLib::SetCursorVisibility(bool bDrawCursor) {
}

void UGSE_InputFuncLib::RequestRebuildControlMappings(const APlayerController* PlayerController, bool bForceImmediately, bool bIgnoreAllPressedKeysUntilRelease) {
}

void UGSE_InputFuncLib::RemoveInputMappingContext(APlayerController* PlayerController, const UInputMappingContext* InputMappingContext, bool bIgnoreAllPressedKeysUntilRelease, bool bForceImmediately) {
}

void UGSE_InputFuncLib::RegisterInputTargetBinding(UGSInputTargetBinding* InputTargetBindingObj) {
}

void UGSE_InputFuncLib::RegisterGSInputProc(const UObject* WorldContext, EGSInputProcOrder Order) {
}

TArray<FKey> UGSE_InputFuncLib::QueryKeysMappedToAction(APlayerController* PlayerController, const UInputAction* Action) {
    return TArray<FKey>();
}

TArray<FKey> UGSE_InputFuncLib::QueryKeysByInputAction(const UInputMappingContext* MappingContext, const UInputAction* Action) {
    return TArray<FKey>();
}

bool UGSE_InputFuncLib::IsConsoleActive(const UObject* WorldContext) {
    return false;
}

bool UGSE_InputFuncLib::IsAppActive() {
    return false;
}

TArray<FString> UGSE_InputFuncLib::GetProductStringList() {
    return TArray<FString>();
}

void UGSE_InputFuncLib::GetMappingsInfo(const UInputMappingContext* MappingContext, TArray<UInputAction*>& Actions, TArray<FKey>& Keys, TArray<UInputAction*>& ChordActions) {
}

TMap<FName, FKey> UGSE_InputFuncLib::GetMappableKey(const UInputMappingContext* MappingContext) {
    return TMap<FName, FKey>();
}

EGSInputType UGSE_InputFuncLib::GetLastInputType(const UObject* WorldContext) {
    return EGSInputType::None;
}

FName UGSE_InputFuncLib::GetKeyByPointerEvent(const FPointerEvent PointerEvent) {
    return NAME_None;
}

FName UGSE_InputFuncLib::GetKeyByKeyEvent(const FKeyEvent KeyEvent) {
    return NAME_None;
}

FName UGSE_InputFuncLib::GetKeyByAnalogInputEvent(const FAnalogInputEvent AnalogInputEvent) {
    return NAME_None;
}

UGSInputSettingPreProc* UGSE_InputFuncLib::GetInputSettingPreProc(const UObject* WorldContext) {
    return NULL;
}

UGSInputPreProc* UGSE_InputFuncLib::GetInputPreProc(const UObject* WorldContext) {
    return NULL;
}

TArray<EGSInputDeviceType> UGSE_InputFuncLib::GetInputDeviceTypes() {
    return TArray<EGSInputDeviceType>();
}

FVector UGSE_InputFuncLib::GetInputActionValue(APlayerController* PlayerController, const UInputAction* Action) {
    return FVector{};
}

float UGSE_InputFuncLib::GetGamepadDeadZoneThreshold() {
    return 0.0f;
}

FString UGSE_InputFuncLib::GetGamepadControllerName(int32 ControllerId) {
    return TEXT("");
}

int32 UGSE_InputFuncLib::GetDebugEventAccumulatorThisTick(APlayerController* PlayerController, const UInputAction* Action, bool IsReleasedEvent) {
    return 0;
}

void UGSE_InputFuncLib::GetConflictChordInputAction(const UInputAction* PrimaryChordAction, const TArray<UInputMappingContext*> Contexts, TArray<UInputAction*>& PrimaryConflictActions, TArray<UInputAction*>& SecondaryConflictActions) {
}

TArray<UInputAction*> UGSE_InputFuncLib::GetChordInputAction(const UInputMappingContext* InputMappingContext) {
    return TArray<UInputAction*>();
}

TArray<FString> UGSE_InputFuncLib::GetActionNamesFromInputMappingContext(UInputMappingContext* InputMappingContext) {
    return TArray<FString>();
}

void UGSE_InputFuncLib::FlushPressedInput(APlayerController* PlayerController) {
}

FKey UGSE_InputFuncLib::FindKeyByName(FName KeyName) {
    return FKey{};
}

void UGSE_InputFuncLib::CustomizeInputMappingContext(UInputMappingContext* MappingContext, FName MappableName, FName KeyName) {
}

void UGSE_InputFuncLib::ClearAllInputMappingContext(APlayerController* PlayerController) {
}

void UGSE_InputFuncLib::BindAction(UGSInputComponent* InputComponent, const UInputAction* InputAction, ETriggerEvent TriggerEvent) {
}

void UGSE_InputFuncLib::AddPlayerMappedKey(APlayerController* PlayerController, const FName MappingName, const FKey NewKey, const FModifyContextOptions& Options) {
}

void UGSE_InputFuncLib::AddInputMappingContext(APlayerController* PlayerController, const UInputMappingContext* InputMappingContext, int32 Priority, bool bIgnoreAllPressedKeysUntilRelease, bool bForceImmediately) {
}


