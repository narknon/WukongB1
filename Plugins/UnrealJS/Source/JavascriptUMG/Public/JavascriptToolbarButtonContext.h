#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptSlateIcon.h"
#include "JavascriptToolbarButtonContext.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptToolbarButtonContext : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FTextDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FJavascriptExecuteActionWithEditingObject, UObject*, EditingObject);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FJavascriptCanExecuteActionWithEditingObject, UObject*, EditingObject);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FJavascriptSlateIcon, FIconDelegate);
    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FBoolDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextDelegate OnGetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextDelegate OnGetTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconDelegate OnGetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptExecuteActionWithEditingObject OnExecuteAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptCanExecuteActionWithEditingObject OnCanExecuteAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptCanExecuteActionWithEditingObject OnIsActionChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptCanExecuteActionWithEditingObject OnIsActionButtonVisible;
    
    UJavascriptToolbarButtonContext();

    UFUNCTION(BlueprintCallable)
    void UnmarkReferencedObject();
    
    UFUNCTION(BlueprintCallable)
    void MarkReferencedObject();
    
};

