#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_AllowUseSpecialItemAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AllowUseSpecialItemAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AllowUseSpecialItemID;
    
    UBUS_AllowUseSpecialItemAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

