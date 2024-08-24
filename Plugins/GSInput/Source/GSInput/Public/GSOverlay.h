#pragma once
#include "CoreMinimal.h"
#include "Components/Overlay.h"
#include "GSOverlay.generated.h"

class UOverlaySlot;
class UWidget;

UCLASS(Blueprintable)
class UGSOverlay : public UOverlay {
    GENERATED_BODY()
public:
    UGSOverlay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildAddToGSOverlayCS(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UOverlaySlot* AddChildToGSOverlay(UWidget* Content);
    
};

