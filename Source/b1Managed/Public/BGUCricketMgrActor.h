#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUCricketMgrActor.generated.h"

class UBUS_CricketMgrConfigComp;

UCLASS(Blueprintable)
class ABGUCricketMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_CricketMgrConfigComp* CricketMgrConfigComp;
    
    ABGUCricketMgrActor(const FObjectInitializer& ObjectInitializer);

};

