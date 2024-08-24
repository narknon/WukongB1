#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_IgnoreSkillMappingAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_IgnoreSkillMappingAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillMappingTypeMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillMappingResultRullMask;
    
    UBUS_IgnoreSkillMappingAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

