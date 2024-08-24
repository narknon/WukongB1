#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_TransStyleCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_TransStyleCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResID;
    
    UBI_TransStyleCS();

};

