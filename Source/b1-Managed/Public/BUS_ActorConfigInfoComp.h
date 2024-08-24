#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActorEditCompBase.h"
#include "CircusConfigNonCharacter.h"
#include "BUS_ActorConfigInfoComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ActorConfigInfoComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTagGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTagGuidForGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCircusConfigNonCharacter CircusConfig;
    
    UBUS_ActorConfigInfoComp(const FObjectInitializer& ObjectInitializer);

};

