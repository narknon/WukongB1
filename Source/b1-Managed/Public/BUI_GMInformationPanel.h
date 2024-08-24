#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMInformationPanel.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMInformationPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InfoTemp;
    
    UBUI_GMInformationPanel();

};

