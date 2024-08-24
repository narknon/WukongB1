#include "PCGSelfPruningSettings.h"

UPCGSelfPruningSettings::UPCGSelfPruningSettings() {
    this->PruningType = EPCGSelfPruningType::LargeToSmall;
    this->RadiusSimilarityFactor = 0.25f;
    this->bRandomizedPruning = true;
}


