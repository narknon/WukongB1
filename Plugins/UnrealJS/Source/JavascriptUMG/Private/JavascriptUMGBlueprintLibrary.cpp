#include "JavascriptUMGBlueprintLibrary.h"

UJavascriptUMGBlueprintLibrary::UJavascriptUMGBlueprintLibrary() {
}

FSlateColor UJavascriptUMGBlueprintLibrary::SlateColor_UseSubduedForeground() {
    return FSlateColor{};
}

FSlateColor UJavascriptUMGBlueprintLibrary::SlateColor_UseForeground() {
    return FSlateColor{};
}

int32 UJavascriptUMGBlueprintLibrary::GetLineLength(const FJavascriptTextLayout& TargetTextLayout) {
    return 0;
}

FString UJavascriptUMGBlueprintLibrary::GetAsText(const FJavascriptTextLayout& TextLayout) {
    return TEXT("");
}

void UJavascriptUMGBlueprintLibrary::DrawSpaceSpline(FPaintContext& Context, FVector2D InStart, FVector2D InStartDir, FVector2D InEnd, FVector2D InEndDir, float InThickness, FLinearColor InTint) {
}

void UJavascriptUMGBlueprintLibrary::ClearLines(FJavascriptTextLayout& TextLayout) {
}

void UJavascriptUMGBlueprintLibrary::AddLine(FJavascriptTextLayout& TextLayout, UJavascriptTextModel* Model, const TArray<FJavascriptSlateTextRun>& Runs) {
}


