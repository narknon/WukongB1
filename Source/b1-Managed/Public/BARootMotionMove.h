#pragma once
#include "CoreMinimal.h"
#include "BasicActionBase.h"
#include "BARootMotionMove.generated.h"

class UAIReqMoveToLoc;

UCLASS(Blueprintable)
class UBARootMotionMove : public UBasicActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIReqMoveToLoc* ReqMoveToLoc;
    
public:
    UBARootMotionMove();

};

