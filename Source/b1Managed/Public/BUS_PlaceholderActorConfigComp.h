#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_PlaceholderActorConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_PlaceholderActorConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString describe;
    
    UBUS_PlaceholderActorConfigComp(const FObjectInitializer& ObjectInitializer);

};

