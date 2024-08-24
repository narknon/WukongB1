#pragma once
#include "CoreMinimal.h"
#include "BasicActionBase.h"
#include "BADirectionMove.generated.h"

class UAIReqMoveToLoc;

UCLASS(Blueprintable)
class UBADirectionMove : public UBasicActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIReqMoveToLoc* ReqMoveToLoc;
    
public:
    UBADirectionMove();

};

