#pragma once
#include "CoreMinimal.h"
#include "AbnormalStateType.h"
#include "BUI_Widget.h"
#include "BI_AbnormalStateAccBarCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_AbnormalStateAccBarCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AbnormalStateType AbnormalStateType;
    
    UBI_AbnormalStateAccBarCS();

};

