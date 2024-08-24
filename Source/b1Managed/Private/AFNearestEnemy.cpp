#include "AFNearestEnemy.h"
#include "EAIAttentionFeatureType.h"

UAFNearestEnemy::UAFNearestEnemy() {
    this->FeatureType = EAIAttentionFeatureType::NearestEnemy;
    this->EnemyCharacter = NULL;
}


