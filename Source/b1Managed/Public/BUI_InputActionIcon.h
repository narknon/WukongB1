#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BUI_Button.h"
#include "BUI_InputActionIcon.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_InputActionIcon : public UBUI_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UBUI_InputActionIcon();

};

