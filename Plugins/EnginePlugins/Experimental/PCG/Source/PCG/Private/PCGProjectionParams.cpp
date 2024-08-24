#include "PCGProjectionParams.h"

FPCGProjectionParams::FPCGProjectionParams() {
    this->bProjectPositions = false;
    this->bProjectRotations = false;
    this->bProjectScales = false;
    this->bProjectColors = false;
    this->AttributeMode = EPCGMetadataFilterMode::ExcludeAttributes;
    this->AttributeMergeOperation = EPCGMetadataOp::Min;
}

