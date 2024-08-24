#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_AbnormalStateItemCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_AbnormalStateItemCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningRemaining;
    
    UBI_AbnormalStateItemCS();

};

