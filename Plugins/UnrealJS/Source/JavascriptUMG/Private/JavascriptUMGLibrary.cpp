#include "JavascriptUMGLibrary.h"

UJavascriptUMGLibrary::UJavascriptUMGLibrary() {
}

void UJavascriptUMGLibrary::Unregister(FJavascriptSlateStyle StyleSet) {
}

FJavascriptSlateWidget UJavascriptUMGLibrary::TakeWidget(UWidget* Widget) {
    return FJavascriptSlateWidget{};
}

void UJavascriptUMGLibrary::ShowWindow(FJavascriptSlateWidget NewWindow) {
}

void UJavascriptUMGLibrary::SetCoreContentRoot(FJavascriptSlateStyle StyleSet, const FString& InCoreContentRootDir) {
}

void UJavascriptUMGLibrary::SetContentRoot(FJavascriptSlateStyle StyleSet, const FString& InContentRootDir) {
}

UWidget* UJavascriptUMGLibrary::SetContent(UNativeWidgetHost* TargetWidget, FJavascriptSlateWidget SlateWidget) {
    return NULL;
}

FString UJavascriptUMGLibrary::RootToCoreContentDir(FJavascriptSlateStyle StyleSet, const FString& RelativePath) {
    return TEXT("");
}

FString UJavascriptUMGLibrary::RootToContentDir(FJavascriptSlateStyle StyleSet, const FString& RelativePath) {
    return TEXT("");
}

void UJavascriptUMGLibrary::Register(FJavascriptSlateStyle StyleSet) {
}

FJavascriptSlateWidget UJavascriptUMGLibrary::GetRootWindow() {
    return FJavascriptSlateWidget{};
}

FVector2D UJavascriptUMGLibrary::GenerateDynamicImageResource(const FName InDynamicBrushName) {
    return FVector2D{};
}

FJavascriptSlateStyle UJavascriptUMGLibrary::CreateSlateStyle(FName InStyleSetName) {
    return FJavascriptSlateStyle{};
}

void UJavascriptUMGLibrary::AddWindowAsNativeChild(FJavascriptSlateWidget NewWindow, FJavascriptSlateWidget RootWindow) {
}

void UJavascriptUMGLibrary::AddWindow(FJavascriptSlateWidget NewWindow, const bool bShowImmediately) {
}

void UJavascriptUMGLibrary::AddSound(FJavascriptSlateStyle StyleSet, FName PropertyName, const FSlateSound& Sound) {
}

void UJavascriptUMGLibrary::AddImageBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FVector2D& InImageSize, const FLinearColor& InTint, TEnumAsByte<ESlateBrushTileType::Type> InTiling, TEnumAsByte<ESlateBrushImageType::Type> InImageType) {
}

void UJavascriptUMGLibrary::AddFontInfo(FJavascriptSlateStyle StyleSet, FName PropertyName, const FSlateFontInfo& FontInfo) {
}

void UJavascriptUMGLibrary::AddBoxBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FMargin& InMargin, const FLinearColor& InColorAndOpacity, TEnumAsByte<ESlateBrushImageType::Type> InImageType) {
}

void UJavascriptUMGLibrary::AddBorderBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FMargin& InMargin, const FLinearColor& InColorAndOpacity, TEnumAsByte<ESlateBrushImageType::Type> InImageType) {
}


