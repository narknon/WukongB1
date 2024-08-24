#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "UIEvt_VoidWidgetDelegate.h"
#include "UIEvt_VoidWidgetIntDelegate.h"
#include "BGW_UIEventCollection.generated.h"

UCLASS(Blueprintable)
class UBGW_UIEventCollection : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIEvt_VoidWidget Evt_RootPanelAddUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIEvt_VoidWidgetInt Evt_RootPanelAddUIWithLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIEvt_VoidWidget Evt_RootPanelRemoveUI;
    
    UBGW_UIEventCollection();

};

