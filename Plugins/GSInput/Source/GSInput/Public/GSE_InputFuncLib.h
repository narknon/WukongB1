#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "EGSInputDeviceType.h"
#include "EGSInputProcOrder.h"
#include "EGSInputType.h"
#include "EnhancedInputSubsystemInterface.h"
#include "GSE_InputFuncLib.generated.h"

class APlayerController;
class UGSInputComponent;
class UGSInputPreProc;
class UGSInputSettingPreProc;
class UGSInputTargetBinding;
class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class GSINPUT_API UGSE_InputFuncLib : public UObject {
    GENERATED_BODY()
public:
    UGSE_InputFuncLib();

    UFUNCTION(BlueprintCallable)
    static void UpdateAllInputIcon();
    
    UFUNCTION(BlueprintCallable)
    static void UnRegisterInputTargetBinding(UGSInputTargetBinding* InputTargetBindingObj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnRegisterGSInputProc(const UObject* WorldContext, EGSInputProcOrder Order);
    
    UFUNCTION(BlueprintCallable)
    static bool TryToSetContextNewPriority(APlayerController* PlayerController, const UInputMappingContext* Context, int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    static void SetUIOnly(APlayerController* PlayerController, bool bNeedMouseCapture);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseCursorPosition(FVector2D position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetIgnoreAllButtonKeyInput(const UObject* WorldContext, bool IsIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameOnly(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetCursorVisibility(bool bDrawCursor);
    
    UFUNCTION(BlueprintCallable)
    static void RequestRebuildControlMappings(const APlayerController* PlayerController, bool bForceImmediately, bool bIgnoreAllPressedKeysUntilRelease);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveInputMappingContext(APlayerController* PlayerController, const UInputMappingContext* InputMappingContext, bool bIgnoreAllPressedKeysUntilRelease, bool bForceImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterInputTargetBinding(UGSInputTargetBinding* InputTargetBindingObj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RegisterGSInputProc(const UObject* WorldContext, EGSInputProcOrder Order);
    
    UFUNCTION()
    static TArray<FKey> QueryKeysMappedToAction(APlayerController* PlayerController, const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> QueryKeysByInputAction(const UInputMappingContext* MappingContext, const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsConsoleActive(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAppActive();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetProductStringList();
    
    UFUNCTION(BlueprintCallable)
    static void GetMappingsInfo(const UInputMappingContext* MappingContext, TArray<UInputAction*>& Actions, TArray<FKey>& Keys, TArray<UInputAction*>& ChordActions);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, FKey> GetMappableKey(const UInputMappingContext* MappingContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EGSInputType GetLastInputType(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FName GetKeyByPointerEvent(const FPointerEvent PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static FName GetKeyByKeyEvent(const FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static FName GetKeyByAnalogInputEvent(const FAnalogInputEvent AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGSInputSettingPreProc* GetInputSettingPreProc(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGSInputPreProc* GetInputPreProc(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EGSInputDeviceType> GetInputDeviceTypes();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetInputActionValue(APlayerController* PlayerController, const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static float GetGamepadDeadZoneThreshold();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGamepadControllerName(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDebugEventAccumulatorThisTick(APlayerController* PlayerController, const UInputAction* Action, bool IsReleasedEvent);
    
    UFUNCTION(BlueprintCallable)
    static void GetConflictChordInputAction(const UInputAction* PrimaryChordAction, const TArray<UInputMappingContext*> Contexts, TArray<UInputAction*>& PrimaryConflictActions, TArray<UInputAction*>& SecondaryConflictActions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UInputAction*> GetChordInputAction(const UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetActionNamesFromInputMappingContext(UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static FKey FindKeyByName(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void CustomizeInputMappingContext(UInputMappingContext* MappingContext, FName MappableName, FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllInputMappingContext(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void BindAction(UGSInputComponent* InputComponent, const UInputAction* InputAction, ETriggerEvent TriggerEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerMappedKey(APlayerController* PlayerController, const FName MappingName, const FKey NewKey, const FModifyContextOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    static void AddInputMappingContext(APlayerController* PlayerController, const UInputMappingContext* InputMappingContext, int32 Priority, bool bIgnoreAllPressedKeysUntilRelease, bool bForceImmediately);
    
};

