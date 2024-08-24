#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_AIRequestManageComp.generated.h"

class UBADirectionDamage;
class UBADirectionMove;
class UBAMoveSkill;
class UBARootMotionMove;
class UBATraceMove;

UCLASS(Blueprintable)
class UBUS_AIRequestManageComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBADirectionMove* DirectionMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBARootMotionMove* RootMotionMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBADirectionDamage* DirectionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBATraceMove* TraceMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBAMoveSkill* MoveSkill;
    
public:
    UBUS_AIRequestManageComp();

};

