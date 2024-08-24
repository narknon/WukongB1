#pragma once
#include "CoreMinimal.h"
#include "BasicActionBase.h"
#include "BAMoveSkill.generated.h"

class UAIReqMoveSkill;

UCLASS(Blueprintable)
class UBAMoveSkill : public UBasicActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIReqMoveSkill* ReqMoveSkill;
    
public:
    UBAMoveSkill();

};

