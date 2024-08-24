#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_GuidComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GuidComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceEditRandomGuid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString UnitRandomGuid;
    
    UBUS_GuidComp(const FObjectInitializer& ObjectInitializer);

};

