#pragma once
#include "CoreMinimal.h"
#include "BUI_EndCreditsItem.h"
#include "EndCreditsPageAction.h"
#include "BUI_EndCreditsPage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_EndCreditsPage : public UBUI_EndCreditsItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EndCreditsPageAction PageAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollEndOffset;
    
    UBUI_EndCreditsPage();

};

