#include "BAIT_FindEscapePoint.h"

UBAIT_FindEscapePoint::UBAIT_FindEscapePoint() {
    this->QueryEscapeDirectionTemplate = NULL;
    this->MinCircleDistance = 800.00f;
    this->MaxCircleDistance = 4000.00f;
    this->OwnerCharacter = NULL;
    this->AutoGenPointTag = TEXT("DefaultEscapePoint");
}


