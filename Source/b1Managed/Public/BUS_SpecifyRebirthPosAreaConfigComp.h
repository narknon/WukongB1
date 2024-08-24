#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_SpecifyRebirthPosAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SpecifyRebirthPosAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindTuDiMiaoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindZhaoHunFanID;
    
    UBUS_SpecifyRebirthPosAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

