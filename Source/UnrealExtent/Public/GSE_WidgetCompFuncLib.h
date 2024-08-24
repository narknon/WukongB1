#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_WidgetCompFuncLib.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_WidgetCompFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_WidgetCompFuncLib();

    UFUNCTION(BlueprintCallable)
    static void UnregisterWidgetComponent(UWidgetComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterWidgetComponent(UWidgetComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static void DestoryWidgetComponent(UWidgetComponent* Comp);
    
};

