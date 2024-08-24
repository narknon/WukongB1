#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Blueprint/UserWidget.h"
#include "OnInputActionEventDelegate.h"
#include "OnInputAxisEventDelegate.h"
#include "JavascriptWidget.generated.h"

class UJavascriptContext;
class UPanelSlot;
class UVisual;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class JAVASCRIPTUMG_API UJavascriptWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJavascriptContext* JavascriptContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionEvent OnInputActionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionEvent OnReleaseActionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputAxisEvent OnInputAxisEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelSlot* ContentSlot;
    
public:
    UJavascriptWidget();

    UFUNCTION(BlueprintCallable)
    void SetRootWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChild();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleaseInputActionByName(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnListenForInputAxis(FName AxisName, TEnumAsByte<EInputEvent> EventType, bool bConsume);
    
    UFUNCTION(BlueprintCallable)
    void OnListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputAxisByName(float Axis, FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputActionByName(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroy(bool bReleaseChildren);
    
    UFUNCTION(BlueprintCallable)
    static bool HasValidCachedWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void CallSynchronizeProperties(UVisual* WidgetOrSlot);
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UWidget* Content);
    
};

