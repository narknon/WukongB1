#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_GroupAIAreaComp.generated.h"

class UBGWGroupAIBattleHotZoneConfigDataAsset;
class UBGWGroupAIMgrConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GroupAIAreaComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWGroupAIMgrConfigDataAsset* GroupAIMgrConfigDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWGroupAIBattleHotZoneConfigDataAsset* GroupAIBattleHotZoneConfigDA;
    
    UBUS_GroupAIAreaComp(const FObjectInitializer& ObjectInitializer);

};

