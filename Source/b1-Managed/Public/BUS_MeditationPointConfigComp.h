#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "MeditationPointConfig.h"
#include "BUS_MeditationPointConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_MeditationPointConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeditationPointConfig MeditationPointConfig;
    
    UBUS_MeditationPointConfigComp(const FObjectInitializer& ObjectInitializer);

};

