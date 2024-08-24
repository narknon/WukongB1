#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_RebirthPointInfoSaveConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_RebirthPointInfoSaveConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebirthPointConfigID;
    
    UBUS_RebirthPointInfoSaveConfigComp(const FObjectInitializer& ObjectInitializer);

};

