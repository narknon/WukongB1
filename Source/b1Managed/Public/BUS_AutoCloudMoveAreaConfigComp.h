#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_AutoCloudMoveAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AutoCloudMoveAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeightDistance;
    
    UBUS_AutoCloudMoveAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

