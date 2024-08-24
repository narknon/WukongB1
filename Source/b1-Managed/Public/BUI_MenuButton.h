#pragma once
#include "CoreMinimal.h"
#include "BUI_Button.h"
#include "MenuUIStat.h"
#include "BUI_MenuButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_MenuButton : public UBUI_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MenuUIStat MenuUIStat;
    
    UBUI_MenuButton();

};

