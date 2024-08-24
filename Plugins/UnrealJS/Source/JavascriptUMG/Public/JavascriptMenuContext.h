#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EJavasrciptUserInterfaceActionType.h"
#include "JavascriptSlateIcon.h"
#include "JavascriptToolbarButtonContext.h"
#include "JavascriptMenuContext.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptMenuContext : public UObject {
    GENERATED_BODY()

    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FExecuteAction);
    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FGetActionCheckState);
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptSlateIcon Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EJavasrciptUserInterfaceActionType::Type> ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnCanExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExecuteAction OnExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetActionCheckState OnGetActionCheckState;
    
    UJavascriptMenuContext();

};

