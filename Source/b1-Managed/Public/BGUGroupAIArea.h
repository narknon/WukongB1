#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUGroupAIArea.generated.h"

class UBUS_GroupAIAreaConfigInfoComp;

UCLASS(Blueprintable)
class ABGUGroupAIArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GroupAIAreaConfigInfoComp* GroupAIAreaConfigInfoComp;
    
    ABGUGroupAIArea(const FObjectInitializer& ObjectInitializer);

};

