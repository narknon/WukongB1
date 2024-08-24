#pragma once
#include "CoreMinimal.h"
#include "GSOverlay.h"
#include "UGSOverlayCS.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UUGSOverlayCS : public UGSOverlay {
    GENERATED_BODY()
public:
    UUGSOverlayCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChildAddToGSOverlayCS(UWidget* Widget);
    
};

