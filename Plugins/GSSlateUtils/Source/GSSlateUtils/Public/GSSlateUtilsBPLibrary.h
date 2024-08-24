#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSSlateUtilsBPLibrary.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class GSSLATEUTILS_API UGSSlateUtilsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSSlateUtilsBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetChildrenWidgetByUTextBlock_STextBlock(UUserWidget* TargetUserWidget, UTextBlock* TargetUTextBlock, FText TextContent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetChildrenWidgetByUImage_SImage(UUserWidget* TargetUserWidget, UImage* TargetUImage, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static bool SetChildrenWidgetByName_STextBlock(UUserWidget* TargetUserWidget, FName TargetName, FText TextContent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetChildrenWidgetByName_SImage(UUserWidget* TargetUserWidget, FName TargetName, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCacheSlateBrush(UUserWidget* TargetUserWidget);
    
};

