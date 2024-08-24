#pragma once
#include "CoreMinimal.h"
#include "JavascriptTreeView.h"
#include "JavascriptListView.generated.h"

class UObject;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptListView : public UJavascriptTreeView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UJavascriptListView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestListRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClick(UObject* Object);
    
};

