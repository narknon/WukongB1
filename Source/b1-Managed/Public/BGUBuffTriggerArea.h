#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUBuffTriggerArea.generated.h"

class UBUS_BuffTriggerAreaConfigComp;

UCLASS(Blueprintable)
class ABGUBuffTriggerArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_BuffTriggerAreaConfigComp* BuffTriggerAreaConfigComp;
    
    ABGUBuffTriggerArea(const FObjectInitializer& ObjectInitializer);

};

