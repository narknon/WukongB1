#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_FindEscapePoint.generated.h"

class ABGUCharacter;
class UEnvQuery;

UCLASS(Blueprintable)
class UBAIT_FindEscapePoint : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryEscapeDirectionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCircleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCircleDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacter* OwnerCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoGenPointTag;
    
    UBAIT_FindEscapePoint();

};

