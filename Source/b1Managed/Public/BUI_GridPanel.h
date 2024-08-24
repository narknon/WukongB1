#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GridPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GridPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListMinRow;
    
    UBUI_GridPanel();

};

