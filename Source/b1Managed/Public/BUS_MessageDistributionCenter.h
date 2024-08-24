#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActorEditCompBase.h"
#include "BUS_MessageDistributionCenter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_MessageDistributionCenter : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> BattleEventMap;
    
    UBUS_MessageDistributionCenter(const FObjectInitializer& ObjectInitializer);

};

