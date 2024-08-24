#pragma once
#include "CoreMinimal.h"
#include "AttentionFeatureBase.h"
#include "AFAttackableEnemy.generated.h"

class ABGUCharacterCS;

UCLASS(Blueprintable)
class UAFAttackableEnemy : public UAttentionFeatureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABGUCharacterCS*> EnemyActors;
    
    UAFAttackableEnemy();

};

