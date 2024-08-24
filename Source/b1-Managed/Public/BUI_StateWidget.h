#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "FUIData.h"
#include "WidgetUIStat.h"
#include "BUI_StateWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_StateWidget : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<WidgetUIStat, FFUIData> DefaultConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<WidgetUIStat, FFUIData> DisableConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EditIsDisable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WidgetUIStat EditCurState;
    
    UBUI_StateWidget();

};

