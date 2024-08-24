#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_NameBar.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_NameBar : public UBUI_Widget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackImage;
    
public:
    UBUI_NameBar();

};

