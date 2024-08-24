#pragma once
#include "CoreMinimal.h"
#include "BasicActionBase.h"
#include "BADirectionDamage.generated.h"

class UAIReqDirDamage;

UCLASS(Blueprintable)
class UBADirectionDamage : public UBasicActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIReqDirDamage* ReqDirDamage;
    
public:
    UBADirectionDamage();

};

