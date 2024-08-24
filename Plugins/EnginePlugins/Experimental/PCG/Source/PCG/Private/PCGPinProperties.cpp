#include "PCGPinProperties.h"

FPCGPinProperties::FPCGPinProperties() {
    this->AllowedTypes = EPCGDataType::None;
    this->bAllowMultipleData = false;
    this->bAllowMultipleConnections = false;
    this->bAdvancedPin = false;
}

