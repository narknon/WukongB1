#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EJavasrciptUserInterfaceActionType.h"
#include "JavascriptSlateIcon.h"
#include "JavascriptMenuContext.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptMenuContext : public UObject {
    GENERATED_BODY()
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
    FActionCheckStateDelegate OnGetActionCheckState;
    
    UJavascriptMenuContext();

};

