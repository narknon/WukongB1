#include "PCGMetadataMakeVectorSettings.h"

UPCGMetadataMakeVectorSettings::UPCGMetadataMakeVectorSettings() {
    this->OutputType = EPCGMetadataTypes::Vector2;
    this->MakeVector3Op = EPCGMetadataMakeVector3::ThreeValues;
    this->MakeVector4Op = EPCGMetadataMakeVector4::FourValues;
}


