#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_GroupAIAreaConfigInfoComp.generated.h"

class UBGWGroupAIBattleHotZoneConfigDataAsset;
class UBGWGroupAIMgrConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GroupAIAreaConfigInfoComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWGroupAIMgrConfigDataAsset* GroupAIMgrConfigDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWGroupAIBattleHotZoneConfigDataAsset* GroupAIBattleHotZoneConfigDA;
    
    UBUS_GroupAIAreaConfigInfoComp(const FObjectInitializer& ObjectInitializer);

};

