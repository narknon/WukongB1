#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/TileView.h"
#include "JavascriptTileView.generated.h"

class UJavascriptContext;
class UObject;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptTileView : public UTileView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJavascriptContext* JavascriptContext;
    
    UJavascriptTileView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionChanged(UObject* Object, ESelectInfo::Type Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoubleClick(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClick(UObject* Object);
    
};

