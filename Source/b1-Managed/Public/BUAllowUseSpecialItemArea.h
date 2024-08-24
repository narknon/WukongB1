#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BUAllowUseSpecialItemArea.generated.h"

class UBUS_AllowUseSpecialItemAreaConfigComp;

UCLASS(Blueprintable)
class ABUAllowUseSpecialItemArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_AllowUseSpecialItemAreaConfigComp* AllowUseSpecialItemAreaConfigComp;
    
    ABUAllowUseSpecialItemArea(const FObjectInitializer& ObjectInitializer);

};

