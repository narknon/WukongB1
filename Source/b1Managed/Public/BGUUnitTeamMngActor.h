#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUUnitTeamMngActor.generated.h"

class UBUS_UnitTeamMngConfigComp;

UCLASS(Blueprintable)
class ABGUUnitTeamMngActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_UnitTeamMngConfigComp* UnitTeamMngConfigComp;
    
    ABGUUnitTeamMngActor(const FObjectInitializer& ObjectInitializer);

};

