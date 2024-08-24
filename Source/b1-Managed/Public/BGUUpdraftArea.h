#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUUpdraftArea.generated.h"

class UBUS_UpdraftConfigInfoComp;

UCLASS(Blueprintable)
class ABGUUpdraftArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_UpdraftConfigInfoComp* UpdraftConfigInfoComp;
    
    ABGUUpdraftArea(const FObjectInitializer& ObjectInitializer);

};

