#pragma once
#include "CoreMinimal.h"
#include "BasicActionBase.h"
#include "BATraceMove.generated.h"

class UAIReqMoveToActor;

UCLASS(Blueprintable)
class UBATraceMove : public UBasicActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIReqMoveToActor* ReqMoveToActor;
    
public:
    UBATraceMove();

};

