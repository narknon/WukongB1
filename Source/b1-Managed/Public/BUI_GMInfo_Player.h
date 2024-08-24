#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMInfo_Player.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMInfo_Player : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InfoTemp;
    
    UBUI_GMInfo_Player();

};

