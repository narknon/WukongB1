#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_StickLevelDotCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_StickLevelDotCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindPelevel;
    
    UBI_StickLevelDotCS();

};

