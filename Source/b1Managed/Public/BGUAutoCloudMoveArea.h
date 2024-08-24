#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUAutoCloudMoveArea.generated.h"

class UBUS_AutoCloudMoveAreaConfigComp;

UCLASS(Blueprintable)
class ABGUAutoCloudMoveArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_AutoCloudMoveAreaConfigComp* AutoCloudMoveAreaConfigComp;
    
    ABGUAutoCloudMoveArea(const FObjectInitializer& ObjectInitializer);

};

