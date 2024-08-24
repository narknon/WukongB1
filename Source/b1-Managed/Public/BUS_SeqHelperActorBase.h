#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BUS_SeqHelperActorBase.generated.h"

class UBUS_SeqHelperActorComp;

UCLASS(Blueprintable)
class ABUS_SeqHelperActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SeqHelperActorComp* SeqHelperActorComp;
    
    ABUS_SeqHelperActorBase(const FObjectInitializer& ObjectInitializer);

};

