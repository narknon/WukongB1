#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUSpecifyRebirthPosArea.generated.h"

class UBUS_SpecifyRebirthPosAreaConfigComp;

UCLASS(Blueprintable)
class ABGUSpecifyRebirthPosArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpecifyRebirthPosAreaConfigComp* ConfigComp;
    
    ABGUSpecifyRebirthPosArea(const FObjectInitializer& ObjectInitializer);

};

