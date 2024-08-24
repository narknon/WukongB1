#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_ShortcutItemBaseCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_ShortcutItemBaseCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurPosIdx;
    
    UBI_ShortcutItemBaseCS();

};

