#pragma once
#include "CoreMinimal.h"
#include "GSOnButtonCheckStateChangedDelegate.h"
#include "GSButton.h"
#include "GSButtonCheck.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UGSButtonCheck : public UGSButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CheckedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsChecked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsClickTriggerStateChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnButtonCheckStateChanged OnGSButtonCheckStateChanged;
    
    UGSButtonCheck();

};

