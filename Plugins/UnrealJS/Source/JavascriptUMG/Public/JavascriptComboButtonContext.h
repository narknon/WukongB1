#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptComboButtonContext.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptComboButtonContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextDelegate OnGetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextDelegate OnGetTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconDelegate OnGetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptGetWidgetWithEditingObject OnGetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnCanExecute;
    
    UJavascriptComboButtonContext();

};
