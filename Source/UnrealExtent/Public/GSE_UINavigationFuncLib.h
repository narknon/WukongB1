#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "EGSUIConflictNavigationType.h"
#include "GSE_UINavigationFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_UINavigationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_UINavigationFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetRepeatFactor(float RepeatFactorInDefault, float RepeatFactorInPressure, float RepeatPressureFactor, float RepeatPressureCondition);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeedTabKeyNavigation(bool IsNeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeedNavigationAction(bool IsNeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeedKeyNavigation(bool IsNeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeedAnalogNavigation(bool IsNeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnalogNavigationVerticalThreshold(float TargetThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnalogNavigationHorizontalThreshold(float TargetThreshold);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRepeatAction(const FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static void InitSetWorkingGSUINavigation();
    
    UFUNCTION(BlueprintCallable)
    static EUINavigation GetNavigationDirectionFromKey(const FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static EUINavigation GetNavigationDirectionFromAnalogForOP(const FAnalogInputEvent& InAnalogEvent);
    
    UFUNCTION(BlueprintCallable)
    static EUINavigationAction GetNavigationActionFromKey(const FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsNeedTabKeyNavigation();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsNeedNavigationAction();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsNeedKeyNavigation();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsNeedAnalogNavigation();
    
    UFUNCTION(BlueprintCallable)
    static void ClearNavigationKeyByNavigation(EUINavigation TargetNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNavigationKey(const FName& KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNavigationActionKeyByAction(EUINavigationAction TargetNavigationAction);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNavigationActionKey(const FName& KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllNavigationKey();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllNavigationActionKey();
    
    UFUNCTION(BlueprintCallable)
    static void BlockConflictNavigation(EGSUIConflictNavigationType ConflictNavigationType, bool bBlock, TArray<EUINavigation> NotBlockNavigations);
    
    UFUNCTION(BlueprintCallable)
    static void AddNavigationKey(EUINavigation TargetNavigation, const FName& KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void AddNavigationActionKey(EUINavigationAction TargetNavigationAction, const FName& KeyName);
    
};

