#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_DestructibleDestroyEffectTriggerComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DestructibleDestroyEffectTriggerComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestructibleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EffectIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BuffIDs;
    
    UBUS_DestructibleDestroyEffectTriggerComp(const FObjectInitializer& ObjectInitializer);

};

