#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FFXActorConfig.h"
#include "BUS_FXActorBaseConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FXActorBaseConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFFXActorConfig FXActorConfig;
    
    UBUS_FXActorBaseConfigComp(const FObjectInitializer& ObjectInitializer);

};

