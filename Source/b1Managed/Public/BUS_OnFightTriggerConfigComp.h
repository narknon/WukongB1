#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_OnFightTriggerConfigComp.generated.h"

class ABGUCharacterCS;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_OnFightTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacterCS* TargetUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFightSkillID;
    
    UBUS_OnFightTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

