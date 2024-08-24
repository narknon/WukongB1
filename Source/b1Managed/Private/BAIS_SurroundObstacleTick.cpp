#include "BAIS_SurroundObstacleTick.h"

UBAIS_SurroundObstacleTick::UBAIS_SurroundObstacleTick() {
    this->CheckObstacleEQSTemplate = NULL;
    this->CheckDistance = 1000.00f;
    this->CheckPointNum = 24;
    this->CheckPointsWeightList.AddDefaulted(24);
    this->EscapeWay = EscapeWay::CastSkill;
    this->OwnerCharacter = NULL;
}

void UBAIS_SurroundObstacleTick::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


