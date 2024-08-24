#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUCloudMoveRestrictArea.generated.h"

class UBUS_CloudMoveRestrictAreaConfigComp;

UCLASS(Blueprintable)
class ABGUCloudMoveRestrictArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_CloudMoveRestrictAreaConfigComp* CloudMoveRestrictAreaConfigComp;
    
    ABGUCloudMoveRestrictArea(const FObjectInitializer& ObjectInitializer);

};

