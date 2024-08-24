#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUManualSplineMoveVolume.generated.h"

class UBUS_ManualSplineMoveVolumeComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUManualSplineMoveVolume : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ManualSplineMoveVolumeComp* ManualSplineMoveVolumeComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollisionComponent;
    
public:
    ABGUManualSplineMoveVolume(const FObjectInitializer& ObjectInitializer);

};

