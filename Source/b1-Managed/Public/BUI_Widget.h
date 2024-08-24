#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "AnimKeyStateBlendCfg.h"
#include "AnimationInfo.h"
#include "AnimationRestoreInfo.h"
#include "EGSTickType.h"
#include "MatSyncConfig.h"
#include "UGSInputWidgetCS.h"
#include "BUI_Widget.generated.h"

class UAkAudioEvent;
class UGSAnimKeyStateBlender;
class UMediaPlayer;
class UObject;
class UUILRuntimeDelegateWrapperBase;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_Widget : public UUGSInputWidgetCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsNewConfig: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSTickType GSDefaultTickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSTickType CurTickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRegTick: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUILRuntimeDelegateWrapperBase*> DelegateWrapperHolder;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnShowAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnHideAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAnimationInfo> AnimationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAnimationRestoreInfo> AnimationRestoreConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* WidgetMPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimKeyStateBlendCfg> GSAnimKeyStateBlenderCfg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UGSAnimKeyStateBlender*> GSAnimKeyStateBlenderObjMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatSyncConfig> CommSyncParam;
    
    UBUI_Widget();

    UFUNCTION(BlueprintCallable)
    void GSAnimKeyToState(const FString& AnimName, const FString& TargetState, bool IsForce, float InStateDelayEasingTime, float InStateOverideEasingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void WoodTestAnimKeyState(const FString& AnimName, const FString& TargetState, float InStateDelayEasingTime, float InStateOverideEasingTime, bool IsForce);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGSOnListItemObjectSet(UObject* ListItemObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Destruct();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationSequenceEvent(UWidgetAnimation* Animation, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Construct();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void PreConstruct(bool IsDesignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnFocusChanging(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    
};

