#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_PlayerStateItemCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_PlayerStateItemCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningRemaining;
    
    UBI_PlayerStateItemCS();

};

