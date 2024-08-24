#include "GSEQG_SimpleGrid.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UGSEQG_SimpleGrid::UGSEQG_SimpleGrid() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->GridHalfSize = 1000.00f;
    this->SpaceBetween = 500.00f;
}


