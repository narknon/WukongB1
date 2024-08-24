#pragma once
#include "CoreMinimal.h"
#include "BUI_Button.h"
#include "ButtonUIStat.h"
#include "FUIData.h"
#include "TalentState.h"
#include "BUI_ButtonTalentItemV2.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ButtonTalentItemV2 : public UBUI_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> NotLearnUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> HasLearnUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> MaxLearnUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TalentState CurTalentState;
    
    UBUI_ButtonTalentItemV2();

};

