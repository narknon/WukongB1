#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnPointerEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnPointerEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnPointerEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    FEventReply Callback(FGeometry Geometry, FPointerEvent PointerEvent);
    
};

