#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUSceneRotateTriggerArea.generated.h"

class UBUS_SceneRotateTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUSceneRotateTriggerArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SceneRotateTriggerConfigComp* SceneRotateTriggerConfigComp;
    
    ABGUSceneRotateTriggerArea(const FObjectInitializer& ObjectInitializer);

};

