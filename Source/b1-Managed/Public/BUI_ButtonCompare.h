#pragma once
#include "CoreMinimal.h"
#include "BUI_ButtonLongPressV2.h"
#include "ButtonUIStat.h"
#include "FUIData.h"
#include "BUI_ButtonCompare.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ButtonCompare : public UBUI_ButtonLongPressV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> CurUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> SelectUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsSelect: 1;
    
    UBUI_ButtonCompare();

};

