#pragma once
#include "CoreMinimal.h"
#include "BUI_Button.h"
#include "ButtonUIStat.h"
#include "FUIData.h"
#include "BUI_ButtonNone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ButtonNone : public UBUI_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> NoneUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> NormalUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsNone: 1;
    
    UBUI_ButtonNone();

};

