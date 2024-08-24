#include "PCGMetadataTransformSettings.h"

UPCGMetadataTransformSettings::UPCGMetadataTransformSettings() {
    this->Operation = EPCGMedadataTransformOperation::Compose;
    this->TransformLerpMode = EPCGTransformLerpMode::QuatInterp;
}


