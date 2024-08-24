#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_ScrollTips.generated.h"

class UGSScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ScrollTips : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSScrollBox* ScrollBox;
    
    UBUI_ScrollTips();

};

