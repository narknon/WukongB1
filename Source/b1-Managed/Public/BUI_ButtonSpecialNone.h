#pragma once
#include "CoreMinimal.h"
#include "BUI_ButtonNone.h"
#include "ButtonUIStat.h"
#include "FUIData.h"
#include "BUI_ButtonSpecialNone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ButtonSpecialNone : public UBUI_ButtonNone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> SpecialNoneUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> SpecialNormalUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsSpecial: 1;
    
    UBUI_ButtonSpecialNone();

};

