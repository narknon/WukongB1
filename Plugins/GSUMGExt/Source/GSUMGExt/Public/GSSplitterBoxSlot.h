#pragma once
#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "GSSplitterBoxSlot.generated.h"

UCLASS(Blueprintable)
class GSUMGEXT_API UGSSplitterBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UGSSplitterBoxSlot();

    UFUNCTION(BlueprintCallable)
    void SetSize(float InSize);
    
};

