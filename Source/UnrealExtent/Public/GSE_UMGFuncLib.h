#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Rendering/RenderingCommon.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Layout/Margin.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "ProjResult.h"
#include "ProjWidgetInfo.h"
#include "Templates/SubclassOf.h"
#include "TextFoldingConfig.h"
#include "GSE_UMGFuncLib.generated.h"

class APlayerController;
class UBinkMediaPlayer;
class UBorder;
class UDataAsset;
class UGSAnimKeyStateBlender;
class UGSViewPortHelper;
class UImage;
class UMaterialInstanceDynamic;
class UMediaPlayer;
class UObject;
class UPanelWidget;
class URichTextBlock;
class UTextBlock;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_UMGFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_UMGFuncLib();

    UFUNCTION(BlueprintCallable)
    static FVector2D WidgetLocalToRoundedLocal(UWidget* Widget, const FVector2D& LocalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D WidgetLocalToAbsolute(UWidget* Widget, const FVector2D& LocalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D WidgetAbsoluteToLocal(UWidget* Widget, const FVector2D& AbsoluteCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SlateLocalToAbsolute(FGeometry Geometry, FVector2D LocalPos);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SlateAbsoluteToLocal(FGeometry Geometry, FVector2D AbsolutePos);
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetEnable(UWidget* Widget, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserFocusWithCause(APlayerController* PlayerController, UWidget* Widget, EFocusCause Cause);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextToBitmapFontBox(UWidget* Widget, FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetLocalStringTableEntry(const FName& ID, const FString& Key, const FString& Src);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetCurrentCulture(const FString& CultureName);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveUserWidgetAsSlateFromViewport(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshRichTextDefaultStyle(URichTextBlock* RichTextBlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RefreshDPIScale(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void QAGetWidgetWithText(UObject* WorldContextObject, TArray<UWidget*>& FoundWidgets, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void QAGetWidgetCenterPosition(UWidget* Widget, FVector2D& WidgetPosition, FVector2D& CenterPosition, FVector2D& WidgetSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void QAGetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UWidget*>& FoundWidgets, TSubclassOf<UWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static bool PointerEvent_IsTouchFirstMove(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointerEvent_IsMouseTouchEvent(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointerEvent_IsMouseButtonDown(const FPointerEvent& PointerEvent, const FName& MouseButtonName);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D PointerEvent_GetScreenSpacePosition(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D PointerEvent_GetPositionInGeometry(const FGeometry& Geometry, const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 PointerEvent_GetPointerIndex(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewLocalStringTable(const FName& ID, const FString& Namespace);
    
    UFUNCTION(BlueprintCallable)
    static bool NeedExecuteActionWithDA(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UDataAsset* HitAreaDA, float AdvancedHitAlpha);
    
    UFUNCTION(BlueprintCallable)
    static bool NeedExecuteAction(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UTexture2D* AdvancedHitTexture, float AdvancedHitAlpha);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply MakeEventReply(bool IsHandled);
    
    UFUNCTION(BlueprintCallable)
    static void LogHittestGrid();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D LocalToViewPortPos(UObject* WorldContextObject, const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D LocalToViewPortPixelPos(UObject* WorldContextObject, const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable)
    static int32 LoadTexture2DToAreaIDArray(UTexture2D* TargetTexture, const TMap<FColor, int32>& AreaColorIDMap, TMap<int32, uint8>& AreaData, FVector2D& OutOriginPos, FVector2D& OutMapSize, FString& ErrMsg);
    
    UFUNCTION(BlueprintCallable)
    static void IsWidgetVisiableWithParentInList(TArray<UUserWidget*> InWidgetList, TArray<UUserWidget*>& OutWidgetList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWidgetVisiableWithParent(UWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMediaBeginPlay(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBinkMediaBeginPlay(const UBinkMediaPlayer* BinkMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void InvokeWidgetInputEvent(UWidget* uWidget, int32 InputType, const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool GSProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ViewportPosition, bool& bIsInFront);
    
    UFUNCTION(BlueprintCallable)
    static void GSProjectWidgetList(APlayerController* PlayerController, UWidget* Canvas, TArray<FProjWidgetInfo> ProjWidgetInfos, TArray<FProjResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    static void GetWidgetPositionSizeRefViewPort(UWidget* Widget, FVector2D& position, FVector2D& WidgetSize);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetLocalSize(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetLocalPositionAtCoordinatesWithPaintSpace(UWidget* Widget, const FVector2D& NormalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetLocalPositionAtCoordinates(UWidget* Widget, const FVector2D& NormalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWidgetIsVariable(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetWidgetFromName(UUserWidget* Widget, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetWidgetAnimationName(UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimation* GetWidgetAnimationByName(UUserWidget* Widget, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static float GetWidgetAbsScale(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetAbsoluteSize(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetAbsolutePositionAtCoordinatesWithPaintSpace(UWidget* Widget, const FVector2D& NormalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetAbsolutePositionAtCoordinates(UWidget* Widget, const FVector2D& NormalCoordinates);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetAbsolutePosition(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetViewportSizeXY();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetViewportSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetViewPortScale(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetViewPortAbsPosition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetTextBlockOutlineDynamicMaterial(UTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FMargin GetSafeZonePaddingSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetRootWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static float GetMouseWheelDelta(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMousePositionFromViewport(FVector2D& OutPosition);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetMouseKey(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static double GetMediaPlayerTimer(UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetKeyWithName(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsGamepadKey(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsAxis1DKey(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFocusEventUser(const FFocusEvent& FocusEvent);
    
    UFUNCTION(BlueprintCallable)
    static EFocusCause GetFocusEventCause(const FFocusEvent& FocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentCulture();
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetChildWidgetAt(UPanelWidget* ParentWidget, int32 ChildIndex);
    
    UFUNCTION(BlueprintCallable)
    static float GetAnalogValue(const FAnalogInputEvent& AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnalogKeyIsRepeat(const FAnalogInputEvent& AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetAnalogKey(const FAnalogInputEvent& AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> GetAllChildWidgetWithClass(UUserWidget* UserWidget, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> GetAllChildWidget(UUserWidget* UserWidget);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> GetAllChildUserWidgetWithClass(UUserWidget* UserWidget, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> GetAllChildUserWidget(UPanelWidget* ParentWidget);
    
    UFUNCTION(BlueprintCallable)
    static void FoldTextContent(UTextBlock* InTextBlock, FTextFoldingConfig InFoldingConfig);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindChildWidgetIndex(UUserWidget* UserWidget, UPanelWidget* ParentWidget, FName ChildWidgetName);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* FindChildWidget(UUserWidget* UserWidget, UPanelWidget* ParentWidget, FName ChildWidgetName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UUserWidget* CreateUserWidgetWithClass(UObject* WorldContext, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UUserWidget* CreateUserWidget(UObject* WorldContext, const FString& ResPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGSViewPortHelper* CreateGSViewPortHelper(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGSAnimKeyStateBlender* CreateGSAnimKeyStateBlender(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* CreateEditorStandaloneWidget(UWidget* OwningWidget, const FString& ResPath, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static FText ConvertToTimeText(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second);
    
    UFUNCTION(BlueprintCallable)
    static FText ConvertToDateText(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* ConstructUWidgetWithClass(UUserWidget* FromWidget, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* CloneUserWidget(UUserWidget* BaseWidget, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void CalcImageTexture(UImage* InImage, TArray<FColor>& OutColorArray, TArray<FVector2D>& OutPosArray);
    
    UFUNCTION(BlueprintCallable)
    static bool BindImageOnMouseDownEvent(UImage* Image, UObject* TargetObj, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool BindBorderOnMouseDownEvent(UBorder* Border, UObject* TargetObj, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserWidgetAsSlateToViewport(UUserWidget* Widget, const int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    static void ActiveVirtualKeyboard(bool IsActive);
    
};

