#include "PCGPointFilterSettings.h"

UPCGPointFilterSettings::UPCGPointFilterSettings() {
    this->Operator = EPCGPointFilterOperator::Greater;
    this->bUseConstantThreshold = false;
    this->bUseSpatialQuery = true;
}


