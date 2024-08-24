#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "StickLevelShowType.h"
#include "BI_StickLevelCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_StickLevelCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    StickLevelShowType ShowType;
    
    UBI_StickLevelCS();

};

