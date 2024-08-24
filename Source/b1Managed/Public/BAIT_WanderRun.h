#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "EBGUMoveAIType.h"
#include "BAIT_WanderRun.generated.h"

class ACharacter;
class UEnvQuery;

UCLASS(Blueprintable)
class UBAIT_WanderRun : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUMoveAIType MoveAIType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
public:
    UBAIT_WanderRun();

};

