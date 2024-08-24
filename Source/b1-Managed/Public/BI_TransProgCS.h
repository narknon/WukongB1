#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_TransProgCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_TransProgCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsProgLevel: 1;
    
    UBI_TransProgCS();

};

