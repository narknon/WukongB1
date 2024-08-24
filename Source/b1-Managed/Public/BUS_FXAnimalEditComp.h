#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "EFXAnimalMoveType.h"
#include "EFXAnimalSpeedType.h"
#include "BUS_FXAnimalEditComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FXAnimalEditComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFXAnimalSpeedType SpeedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFXAnimalMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time_BeginToDisappear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time_EscapeToDisappear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time_DisappearToDestory;
    
    UBUS_FXAnimalEditComp(const FObjectInitializer& ObjectInitializer);

};

