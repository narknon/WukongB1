#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_EndCreditsItem.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_EndCreditsItem : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> DependWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataJson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestDataJson;
    
    UBUI_EndCreditsItem();

};

