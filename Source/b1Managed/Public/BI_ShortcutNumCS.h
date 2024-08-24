#pragma once
#include "CoreMinimal.h"
#include "EGSInputType.h"
#include "BUI_StateWidget.h"
#include "BI_ShortcutNumCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_ShortcutNumCS : public UBUI_StateWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSInputType ShowInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurPosIdx;
    
    UBI_ShortcutNumCS();

};

