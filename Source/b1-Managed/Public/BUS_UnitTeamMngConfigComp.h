#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "UnitTeam.h"
#include "BUS_UnitTeamMngConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_UnitTeamMngConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUnitTeam> TeamList;
    
    UBUS_UnitTeamMngConfigComp(const FObjectInitializer& ObjectInitializer);

};

