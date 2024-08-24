#pragma once
#include "CoreMinimal.h"
#include "EGSInputType.h"
#include "BUI_StateWidget.h"
#include "EnShortcutType.h"
#include "BI_ShortcutBaseCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_ShortcutBaseCS : public UBUI_StateWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSInputType ShowInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnShortcutType ShortcutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurPosIdx;
    
    UBI_ShortcutBaseCS();

};

