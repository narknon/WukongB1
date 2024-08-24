#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "EGSCloudMoveRestrictType.h"
#include "BUS_CloudMoveRestrictAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CloudMoveRestrictAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSCloudMoveRestrictType CloudMoveRestrictType;
    
    UBUS_CloudMoveRestrictAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

