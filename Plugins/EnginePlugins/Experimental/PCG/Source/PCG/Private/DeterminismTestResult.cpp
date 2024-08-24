#include "DeterminismTestResult.h"

FDeterminismTestResult::FDeterminismTestResult() {
    this->Seed = 0;
    this->DataTypesTested = EPCGDataType::None;
    this->bFlagRaised = false;
}

