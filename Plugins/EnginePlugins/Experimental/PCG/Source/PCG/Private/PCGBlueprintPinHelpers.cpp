#include "PCGBlueprintPinHelpers.h"

UPCGBlueprintPinHelpers::UPCGBlueprintPinHelpers() {
}

FPCGPinProperties UPCGBlueprintPinHelpers::MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bAdvancedPin, EPCGExclusiveDataType AllowedType) {
    return FPCGPinProperties{};
}

void UPCGBlueprintPinHelpers::BreakPinProperty(const FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bAdvancedPin, EPCGExclusiveDataType& AllowedType) {
}


