#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_ShortcutDescCS.generated.h"

class UInputAction;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UBI_ShortcutDescCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InputIconTexture;
    
    UBI_ShortcutDescCS();

};

