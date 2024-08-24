#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FGSSpawnProbabilityGroup.h"
#include "BUS_SpawnCollectionComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SpawnCollectionComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGSSpawnProbabilityGroup SpawnGroup;
    
    UBUS_SpawnCollectionComp(const FObjectInitializer& ObjectInitializer);

};

