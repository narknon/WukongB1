#pragma once
#include "CoreMinimal.h"
#include "BUS_EventCollection.h"
#include "Del_SetFloatValueToSimulateFogDelegate.h"
#include "Del_TriggerFrozenFractureBreakDelegate.h"
#include "BUS_EventCollectionCS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_EventCollectionCS : public UBUS_EventCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDel_SetFloatValueToSimulateFog Evt_SetFloatValueToSimulateFog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDel_TriggerFrozenFractureBreak Evt_TriggerFrozenFractureBreak;
    
    UBUS_EventCollectionCS(const FObjectInitializer& ObjectInitializer);

};

