#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ToggleWidgetActionListener.generated.h"

UCLASS(Blueprintable)
class UToggleWidgetActionListener : public UObject {
    GENERATED_BODY()
public:
    UToggleWidgetActionListener();

private:
    UFUNCTION(BlueprintCallable)
    void DoPreview() const;
    
    UFUNCTION(BlueprintCallable)
    void DoNext() const;
    
    UFUNCTION(BlueprintCallable)
    void DoContinuePlay() const;
    
};

