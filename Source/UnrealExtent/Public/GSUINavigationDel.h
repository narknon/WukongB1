#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Input/Events.h"
#include "GSUINavigationDel.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSUINavigationDel : public UObject {
    GENERATED_BODY()
public:
    UGSUINavigationDel();

    UFUNCTION(BlueprintCallable)
    void GSOnNavigationChangedFocus(UWidget* OldWidget, UWidget* NewWidget, FFocusEvent FocusEvent);
    
};

