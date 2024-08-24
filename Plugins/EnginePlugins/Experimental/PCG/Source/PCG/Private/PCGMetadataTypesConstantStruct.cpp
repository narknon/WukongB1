#include "PCGMetadataTypesConstantStruct.h"

FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct() {
    this->Type = EPCGMetadataTypes::Float;
    this->StringMode = EPCGMetadataTypesConstantStructStringMode::String;
    this->FloatValue = 0.00f;
    this->Int32Value = 0;
    this->DoubleValue = 0.00f;
    this->IntValue = 0;
    this->BoolValue = false;
    this->bAllowsTypeChange = false;
}

