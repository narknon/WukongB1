#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_ManualSplineMoveVolumeComp.generated.h"

class UBGWDataAsset_ManualSplineMoveAnimConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ManualSplineMoveVolumeComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_ManualSplineMoveAnimConfig* ForwardSplineAnimConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_ManualSplineMoveAnimConfig* ReverseSplineAnimConfig;
    
    UBUS_ManualSplineMoveVolumeComp(const FObjectInitializer& ObjectInitializer);

};

