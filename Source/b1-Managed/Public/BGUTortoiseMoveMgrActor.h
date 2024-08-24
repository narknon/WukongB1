#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUTortoiseMoveMgrActor.generated.h"

class UBUS_TortoiseMoveMgrActorConfigComp;

UCLASS(Blueprintable)
class ABGUTortoiseMoveMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TortoiseMoveMgrActorConfigComp* TortoiseMoveMgrActorConfigComp;
    
    ABGUTortoiseMoveMgrActor(const FObjectInitializer& ObjectInitializer);

};

