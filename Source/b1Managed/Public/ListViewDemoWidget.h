#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "ListViewDemoWidget.generated.h"

class UListViewDemoEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class UListViewDemoWidget : public UBUI_Widget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UListViewDemoEntryWidget> entryTemplate;
    
public:
    UListViewDemoWidget();

};

