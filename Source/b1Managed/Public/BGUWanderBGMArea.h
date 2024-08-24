#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUWanderBGMArea.generated.h"

class UBUS_WanderBGMAreaConfigComp;

UCLASS(Blueprintable)
class ABGUWanderBGMArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_WanderBGMAreaConfigComp* WanderBGMAreaConfigComp;
    
    ABGUWanderBGMArea(const FObjectInitializer& ObjectInitializer);

};

