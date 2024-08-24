#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "Templates/SubclassOf.h"
#include "BUS_ActorCallComp.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ActorCallComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CallActorCls;
    
    UBUS_ActorCallComp(const FObjectInitializer& ObjectInitializer);

};

