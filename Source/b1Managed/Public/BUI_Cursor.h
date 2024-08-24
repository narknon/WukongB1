#pragma once
#include "CoreMinimal.h"
#include "BUI_CursorBase.h"
#include "ScrollData.h"
#include "ScrollInputData.h"
#include "BUI_Cursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_Cursor : public UBUI_CursorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollInputData ScrollInputParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollData ScrollParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedUpdateParams: 1;
    
    UBUI_Cursor();

};

