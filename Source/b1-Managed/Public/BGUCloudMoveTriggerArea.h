#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUCloudMoveTriggerArea.generated.h"

class UBUS_CloudMoveTriggerAreaConfigComp;

UCLASS(Blueprintable)
class ABGUCloudMoveTriggerArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_CloudMoveTriggerAreaConfigComp* CloudMoveTriggerAreaConfigComp;
    
    ABGUCloudMoveTriggerArea(const FObjectInitializer& ObjectInitializer);

};

