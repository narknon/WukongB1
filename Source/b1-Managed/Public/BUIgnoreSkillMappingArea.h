#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BUIgnoreSkillMappingArea.generated.h"

class UBUS_IgnoreSkillMappingAreaConfigComp;

UCLASS(Blueprintable)
class ABUIgnoreSkillMappingArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_IgnoreSkillMappingAreaConfigComp* IgnoreSkillMappingAreaConfigComp;
    
    ABUIgnoreSkillMappingArea(const FObjectInitializer& ObjectInitializer);

};

