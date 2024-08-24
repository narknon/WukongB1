#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSUIMiscUtil.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UWidget;

UCLASS(Blueprintable)
class UGSUIMiscUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSUIMiscUtil();

    UFUNCTION(BlueprintCallable)
    static void GSUpdateABSMatCoverPos(UMaterialInstanceDynamic* RefABSDynamicInst, FVector2D ScreenRefPos);
    
    UFUNCTION(BlueprintCallable)
    static void GSUpdateABSMatSrcPosSize(UWidget* RefWidget, UMaterialInstanceDynamic* RefABSDynamicInst);
    
    UFUNCTION(BlueprintCallable)
    static void GSUpdateABSMatCoverPosForImg(UImage* RefImage, FVector2D ScreenRefPos);
    
    UFUNCTION(BlueprintCallable)
    static void GSUpdateABSMatSrcPosSizeForImg(UImage* RefImage);
    
};

