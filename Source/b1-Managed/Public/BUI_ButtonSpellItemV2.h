#pragma once
#include "CoreMinimal.h"
#include "BUI_Button.h"
#include "ButtonUIStat.h"
#include "FUIData.h"
#include "BUI_ButtonSpellItemV2.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ButtonSpellItemV2 : public UBUI_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> NoneUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> InitiativeUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> WearInitiativeUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> PassiveUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ButtonUIStat, FFUIData> WearPassiveUIDataConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsInitiative: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsNone: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsWear: 1;
    
    UBUI_ButtonSpellItemV2();

};

