#pragma once
#include "CoreMinimal.h"
#include "AttentionFeatureBase.h"
#include "AFNearestEnemy.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class UAFNearestEnemy : public UAttentionFeatureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* EnemyCharacter;
    
    UAFNearestEnemy();

};

