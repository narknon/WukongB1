#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUDynamicObstacleBase.generated.h"

class UBUS_DynamicObstacleConfigComp;

UCLASS(Blueprintable)
class ABGUDynamicObstacleBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DynamicObstacleConfigComp* DynamicObstacleConfigComp;
    
    ABGUDynamicObstacleBase(const FObjectInitializer& ObjectInitializer);

};

