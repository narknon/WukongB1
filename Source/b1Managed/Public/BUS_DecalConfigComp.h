#pragma once
#include "CoreMinimal.h"
#include "GSFloatCurveToParam.h"
#include "GSLinearColorCurveToParam.h"
#include "ActorEditCompBase.h"
#include "BUS_DecalConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DecalConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSFloatCurveToParam> FloatCurveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSLinearColorCurveToParam> LinearColorCurveList;
    
    UBUS_DecalConfigComp(const FObjectInitializer& ObjectInitializer);

};

