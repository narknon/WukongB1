#include "GSEQG_AreaPointGenerator.h"

UGSEQG_AreaPointGenerator::UGSEQG_AreaPointGenerator() {
    this->XLength = 0.00f;
    this->YLength = 0.00f;
    this->XSplitNum = 0;
    this->YSplitNum = 0;
    this->bFilterPathFinding = false;
    this->bFilterLineTracing = false;
    this->RandomFilterPointNum = 0;
    this->bEnableDebug = false;
}

void UGSEQG_AreaPointGenerator::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


