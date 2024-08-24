#pragma once
#include "CoreMinimal.h"
#include "BUI_ProjWidget.h"
#include "DamageTypeEnum.h"
#include "BUI_MSimNum.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_MSimNum : public UBUI_ProjWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<DamageTypeEnum, FString> PlayerDamageNumConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<DamageTypeEnum, FString> EnemyDamageNumConfig;
    
    UBUI_MSimNum();

private:
    UFUNCTION(BlueprintCallable)
    void OnShowAnimFinished();
    
};

