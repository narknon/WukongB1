#include "GSE_UMGFuncLib.h"
#include "Templates/SubclassOf.h"

UGSE_UMGFuncLib::UGSE_UMGFuncLib() {
}

FVector2D UGSE_UMGFuncLib::WidgetLocalToRoundedLocal(UWidget* Widget, const FVector2D& LocalCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::WidgetLocalToAbsolute(UWidget* Widget, const FVector2D& LocalCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::WidgetAbsoluteToLocal(UWidget* Widget, const FVector2D& AbsoluteCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::SlateLocalToAbsolute(FGeometry Geometry, FVector2D LocalPos) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::SlateAbsoluteToLocal(FGeometry Geometry, FVector2D AbsolutePos) {
    return FVector2D{};
}

void UGSE_UMGFuncLib::SetWidgetEnable(UWidget* Widget, bool Enable) {
}

void UGSE_UMGFuncLib::SetUserFocusWithCause(APlayerController* PlayerController, UWidget* Widget, EFocusCause Cause) {
}

void UGSE_UMGFuncLib::SetTextToBitmapFontBox(UWidget* Widget, FText Text) {
}

bool UGSE_UMGFuncLib::SetLocalStringTableEntry(const FName& ID, const FString& Key, const FString& Src) {
    return false;
}

bool UGSE_UMGFuncLib::SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot) {
    return false;
}

bool UGSE_UMGFuncLib::SetCurrentCulture(const FString& CultureName) {
    return false;
}

void UGSE_UMGFuncLib::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency) {
}

void UGSE_UMGFuncLib::RemoveUserWidgetAsSlateFromViewport(UUserWidget* Widget) {
}

void UGSE_UMGFuncLib::RefreshRichTextDefaultStyle(URichTextBlock* RichTextBlock) {
}

void UGSE_UMGFuncLib::RefreshDPIScale(UObject* WorldContext) {
}

void UGSE_UMGFuncLib::QAGetWidgetWithText(UObject* WorldContextObject, TArray<UWidget*>& FoundWidgets, const FString& Text) {
}

void UGSE_UMGFuncLib::QAGetWidgetCenterPosition(UWidget* Widget, FVector2D& WidgetPosition, FVector2D& CenterPosition, FVector2D& WidgetSize) {
}

void UGSE_UMGFuncLib::QAGetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UWidget*>& FoundWidgets, TSubclassOf<UWidget> WidgetClass) {
}

bool UGSE_UMGFuncLib::PointerEvent_IsTouchFirstMove(const FPointerEvent& PointerEvent) {
    return false;
}

bool UGSE_UMGFuncLib::PointerEvent_IsMouseTouchEvent(const FPointerEvent& PointerEvent) {
    return false;
}

bool UGSE_UMGFuncLib::PointerEvent_IsMouseButtonDown(const FPointerEvent& PointerEvent, const FName& MouseButtonName) {
    return false;
}

FVector2D UGSE_UMGFuncLib::PointerEvent_GetScreenSpacePosition(const FPointerEvent& PointerEvent) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::PointerEvent_GetPositionInGeometry(const FGeometry& Geometry, const FPointerEvent& PointerEvent) {
    return FVector2D{};
}

int32 UGSE_UMGFuncLib::PointerEvent_GetPointerIndex(const FPointerEvent& PointerEvent) {
    return 0;
}

bool UGSE_UMGFuncLib::NewLocalStringTable(const FName& ID, const FString& Namespace) {
    return false;
}

bool UGSE_UMGFuncLib::NeedExecuteActionWithDA(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UDataAsset* HitAreaDA, float AdvancedHitAlpha) {
    return false;
}

bool UGSE_UMGFuncLib::NeedExecuteAction(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UTexture2D* AdvancedHitTexture, float AdvancedHitAlpha) {
    return false;
}

FEventReply UGSE_UMGFuncLib::MakeEventReply(bool IsHandled) {
    return FEventReply{};
}

void UGSE_UMGFuncLib::LogHittestGrid() {
}

FVector2D UGSE_UMGFuncLib::LocalToViewPortPos(UObject* WorldContextObject, const FGeometry& Geometry) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::LocalToViewPortPixelPos(UObject* WorldContextObject, const FGeometry& Geometry) {
    return FVector2D{};
}

int32 UGSE_UMGFuncLib::LoadTexture2DToAreaIDArray(UTexture2D* TargetTexture, const TMap<FColor, int32>& AreaColorIDMap, TMap<int32, uint8>& AreaData, FVector2D& OutOriginPos, FVector2D& OutMapSize, FString& ErrMsg) {
    return 0;
}

void UGSE_UMGFuncLib::IsWidgetVisiableWithParentInList(TArray<UUserWidget*> InWidgetList, TArray<UUserWidget*>& OutWidgetList) {
}

bool UGSE_UMGFuncLib::IsWidgetVisiableWithParent(UWidget* TargetWidget) {
    return false;
}

bool UGSE_UMGFuncLib::IsMediaBeginPlay(const UMediaPlayer* MediaPlayer) {
    return false;
}

bool UGSE_UMGFuncLib::IsBinkMediaBeginPlay(const UBinkMediaPlayer* BinkMediaPlayer) {
    return false;
}

void UGSE_UMGFuncLib::InvokeWidgetInputEvent(UWidget* uWidget, int32 InputType, const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) {
}

bool UGSE_UMGFuncLib::GSProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ViewportPosition, bool& bIsInFront) {
    return false;
}

void UGSE_UMGFuncLib::GSProjectWidgetList(APlayerController* PlayerController, UWidget* Canvas, TArray<FProjWidgetInfo> ProjWidgetInfos, TArray<FProjResult>& Results) {
}

void UGSE_UMGFuncLib::GetWidgetPositionSizeRefViewPort(UWidget* Widget, FVector2D& position, FVector2D& WidgetSize) {
}

FVector2D UGSE_UMGFuncLib::GetWidgetLocalSize(UWidget* Widget) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::GetWidgetLocalPositionAtCoordinatesWithPaintSpace(UWidget* Widget, const FVector2D& NormalCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::GetWidgetLocalPositionAtCoordinates(UWidget* Widget, const FVector2D& NormalCoordinates) {
    return FVector2D{};
}

bool UGSE_UMGFuncLib::GetWidgetIsVariable(const UWidget* Widget) {
    return false;
}

UWidget* UGSE_UMGFuncLib::GetWidgetFromName(UUserWidget* Widget, const FName& Name) {
    return NULL;
}

FString UGSE_UMGFuncLib::GetWidgetAnimationName(UWidgetAnimation* Animation) {
    return TEXT("");
}

UWidgetAnimation* UGSE_UMGFuncLib::GetWidgetAnimationByName(UUserWidget* Widget, const FString& Name) {
    return NULL;
}

float UGSE_UMGFuncLib::GetWidgetAbsScale(UWidget* Widget) {
    return 0.0f;
}

FVector2D UGSE_UMGFuncLib::GetWidgetAbsoluteSize(UWidget* Widget) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::GetWidgetAbsolutePositionAtCoordinatesWithPaintSpace(UWidget* Widget, const FVector2D& NormalCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::GetWidgetAbsolutePositionAtCoordinates(UWidget* Widget, const FVector2D& NormalCoordinates) {
    return FVector2D{};
}

FVector2D UGSE_UMGFuncLib::GetWidgetAbsolutePosition(UWidget* Widget) {
    return FVector2D{};
}

FIntPoint UGSE_UMGFuncLib::GetViewportSizeXY() {
    return FIntPoint{};
}

FVector2D UGSE_UMGFuncLib::GetViewportSize(UObject* WorldContextObject) {
    return FVector2D{};
}

float UGSE_UMGFuncLib::GetViewPortScale(UObject* WorldContextObject) {
    return 0.0f;
}

FVector2D UGSE_UMGFuncLib::GetViewPortAbsPosition(UObject* WorldContextObject) {
    return FVector2D{};
}

UMaterialInstanceDynamic* UGSE_UMGFuncLib::GetTextBlockOutlineDynamicMaterial(UTextBlock* TextBlock) {
    return NULL;
}

FMargin UGSE_UMGFuncLib::GetSafeZonePaddingSize(UObject* WorldContextObject) {
    return FMargin{};
}

UWidget* UGSE_UMGFuncLib::GetRootWidget(UUserWidget* Widget) {
    return NULL;
}

float UGSE_UMGFuncLib::GetMouseWheelDelta(const FPointerEvent& PointerEvent) {
    return 0.0f;
}

bool UGSE_UMGFuncLib::GetMousePositionFromViewport(FVector2D& OutPosition) {
    return false;
}

FKey UGSE_UMGFuncLib::GetMouseKey(const FPointerEvent& PointerEvent) {
    return FKey{};
}

double UGSE_UMGFuncLib::GetMediaPlayerTimer(UMediaPlayer* MediaPlayer) {
    return 0.0;
}

FKey UGSE_UMGFuncLib::GetKeyWithName(FName KeyName) {
    return FKey{};
}

bool UGSE_UMGFuncLib::GetIsGamepadKey(FName KeyName) {
    return false;
}

bool UGSE_UMGFuncLib::GetIsAxis1DKey(FName KeyName) {
    return false;
}

int32 UGSE_UMGFuncLib::GetFocusEventUser(const FFocusEvent& FocusEvent) {
    return 0;
}

EFocusCause UGSE_UMGFuncLib::GetFocusEventCause(const FFocusEvent& FocusEvent) {
    return EFocusCause::Mouse;
}

FString UGSE_UMGFuncLib::GetCurrentCulture() {
    return TEXT("");
}

UWidget* UGSE_UMGFuncLib::GetChildWidgetAt(UPanelWidget* ParentWidget, int32 ChildIndex) {
    return NULL;
}

float UGSE_UMGFuncLib::GetAnalogValue(const FAnalogInputEvent& AnalogInputEvent) {
    return 0.0f;
}

bool UGSE_UMGFuncLib::GetAnalogKeyIsRepeat(const FAnalogInputEvent& AnalogInputEvent) {
    return false;
}

FKey UGSE_UMGFuncLib::GetAnalogKey(const FAnalogInputEvent& AnalogInputEvent) {
    return FKey{};
}

TArray<UWidget*> UGSE_UMGFuncLib::GetAllChildWidgetWithClass(UUserWidget* UserWidget, UClass* WidgetClass) {
    return TArray<UWidget*>();
}

TArray<UWidget*> UGSE_UMGFuncLib::GetAllChildWidget(UUserWidget* UserWidget) {
    return TArray<UWidget*>();
}

TArray<UWidget*> UGSE_UMGFuncLib::GetAllChildUserWidgetWithClass(UUserWidget* UserWidget, UClass* WidgetClass) {
    return TArray<UWidget*>();
}

TArray<UUserWidget*> UGSE_UMGFuncLib::GetAllChildUserWidget(UPanelWidget* ParentWidget) {
    return TArray<UUserWidget*>();
}

void UGSE_UMGFuncLib::FoldTextContent(UTextBlock* InTextBlock, FTextFoldingConfig InFoldingConfig) {
}

int32 UGSE_UMGFuncLib::FindChildWidgetIndex(UUserWidget* UserWidget, UPanelWidget* ParentWidget, FName ChildWidgetName) {
    return 0;
}

UWidget* UGSE_UMGFuncLib::FindChildWidget(UUserWidget* UserWidget, UPanelWidget* ParentWidget, FName ChildWidgetName) {
    return NULL;
}

UUserWidget* UGSE_UMGFuncLib::CreateUserWidgetWithClass(UObject* WorldContext, UClass* WidgetClass) {
    return NULL;
}

UUserWidget* UGSE_UMGFuncLib::CreateUserWidget(UObject* WorldContext, const FString& ResPath) {
    return NULL;
}

UGSViewPortHelper* UGSE_UMGFuncLib::CreateGSViewPortHelper(UObject* WorldContext) {
    return NULL;
}

UGSAnimKeyStateBlender* UGSE_UMGFuncLib::CreateGSAnimKeyStateBlender(UObject* WorldContext) {
    return NULL;
}

UUserWidget* UGSE_UMGFuncLib::CreateEditorStandaloneWidget(UWidget* OwningWidget, const FString& ResPath, const FName& Name) {
    return NULL;
}

FText UGSE_UMGFuncLib::ConvertToTimeText(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second) {
    return FText::GetEmpty();
}

FText UGSE_UMGFuncLib::ConvertToDateText(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second) {
    return FText::GetEmpty();
}

UWidget* UGSE_UMGFuncLib::ConstructUWidgetWithClass(UUserWidget* FromWidget, UClass* WidgetClass) {
    return NULL;
}

UUserWidget* UGSE_UMGFuncLib::CloneUserWidget(UUserWidget* BaseWidget, const FName& Name) {
    return NULL;
}

void UGSE_UMGFuncLib::CalcImageTexture(UImage* InImage, TArray<FColor>& OutColorArray, TArray<FVector2D>& OutPosArray) {
}

bool UGSE_UMGFuncLib::BindImageOnMouseDownEvent(UImage* Image, UObject* TargetObj, const FName& Name) {
    return false;
}

bool UGSE_UMGFuncLib::BindBorderOnMouseDownEvent(UBorder* Border, UObject* TargetObj, const FName& Name) {
    return false;
}

void UGSE_UMGFuncLib::AddUserWidgetAsSlateToViewport(UUserWidget* Widget, const int32 ZOrder) {
}

void UGSE_UMGFuncLib::ActiveVirtualKeyboard(bool IsActive) {
}


