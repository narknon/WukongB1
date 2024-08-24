#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/PanelWidget.h"
#include "GSSplitterBox.generated.h"

class UGSSplitterBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class GSUMGEXT_API UGSSplitterBox : public UPanelWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSplitterFinishedResizingEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitterFinishedResizingEvent OnSplitterFinishedResizing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UGSSplitterBox();

    UFUNCTION(BlueprintCallable)
    UGSSplitterBoxSlot* AddChildToSplitterBox(UWidget* Content);
    
};

