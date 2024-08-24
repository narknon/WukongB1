#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateBrush.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SlateSound.h"
#include "JavascriptSlateStyle.h"
#include "JavascriptSlateWidget.h"
#include "JavascriptUMGLibrary.generated.h"

class UNativeWidgetHost;
class UWidget;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptUMGLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJavascriptUMGLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void Unregister(FJavascriptSlateStyle StyleSet);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptSlateWidget TakeWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void ShowWindow(FJavascriptSlateWidget NewWindow);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoreContentRoot(FJavascriptSlateStyle StyleSet, const FString& InCoreContentRootDir);
    
    UFUNCTION(BlueprintCallable)
    static void SetContentRoot(FJavascriptSlateStyle StyleSet, const FString& InContentRootDir);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* SetContent(UNativeWidgetHost* TargetWidget, FJavascriptSlateWidget SlateWidget);
    
    UFUNCTION(BlueprintCallable)
    static FString RootToCoreContentDir(FJavascriptSlateStyle StyleSet, const FString& RelativePath);
    
    UFUNCTION(BlueprintCallable)
    static FString RootToContentDir(FJavascriptSlateStyle StyleSet, const FString& RelativePath);
    
    UFUNCTION(BlueprintCallable)
    static void Register(FJavascriptSlateStyle StyleSet);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptSlateWidget GetRootWindow();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GenerateDynamicImageResource(const FName InDynamicBrushName);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptSlateStyle CreateSlateStyle(FName InStyleSetName);
    
    UFUNCTION(BlueprintCallable)
    static void AddWindowAsNativeChild(FJavascriptSlateWidget NewWindow, FJavascriptSlateWidget RootWindow);
    
    UFUNCTION(BlueprintCallable)
    static void AddWindow(FJavascriptSlateWidget NewWindow, const bool bShowImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddSound(FJavascriptSlateStyle StyleSet, FName PropertyName, const FSlateSound& Sound);
    
    UFUNCTION(BlueprintCallable)
    static void AddImageBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FVector2D& InImageSize, const FLinearColor& InTint, TEnumAsByte<ESlateBrushTileType::Type> InTiling, TEnumAsByte<ESlateBrushImageType::Type> InImageType);
    
    UFUNCTION(BlueprintCallable)
    static void AddFontInfo(FJavascriptSlateStyle StyleSet, FName PropertyName, const FSlateFontInfo& FontInfo);
    
    UFUNCTION(BlueprintCallable)
    static void AddBoxBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FMargin& InMargin, const FLinearColor& InColorAndOpacity, TEnumAsByte<ESlateBrushImageType::Type> InImageType);
    
    UFUNCTION(BlueprintCallable)
    static void AddBorderBrush(FJavascriptSlateStyle StyleSet, FName PropertyName, const FString& InImageName, const FMargin& InMargin, const FLinearColor& InColorAndOpacity, TEnumAsByte<ESlateBrushImageType::Type> InImageType);
    
};

