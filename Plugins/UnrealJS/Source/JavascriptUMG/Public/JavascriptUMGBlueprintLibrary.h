#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "JavascriptSlateTextRun.h"
#include "JavascriptTextLayout.h"
#include "JavascriptUMGBlueprintLibrary.generated.h"

class UJavascriptTextModel;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptUMGBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJavascriptUMGBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static FSlateColor SlateColor_UseSubduedForeground();
    
    UFUNCTION(BlueprintCallable)
    static FSlateColor SlateColor_UseForeground();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLineLength(const FJavascriptTextLayout& TargetTextLayout);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAsText(const FJavascriptTextLayout& TextLayout);
    
    UFUNCTION(BlueprintCallable)
    static void DrawSpaceSpline(UPARAM(Ref) FPaintContext& Context, FVector2D InStart, FVector2D InStartDir, FVector2D InEnd, FVector2D InEndDir, float InThickness, FLinearColor InTint);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLines(UPARAM(Ref) FJavascriptTextLayout& TextLayout);
    
    UFUNCTION(BlueprintCallable)
    static void AddLine(UPARAM(Ref) FJavascriptTextLayout& TextLayout, UJavascriptTextModel* Model, const TArray<FJavascriptSlateTextRun>& Runs);
    
};

