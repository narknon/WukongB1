#include "PCGAttributePropertySelectorBlueprintHelpers.h"

UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers() {
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName) {
    return false;
}

EPCGAttributePropertySelection UPCGAttributePropertySelectorBlueprintHelpers::GetSelection(const FPCGAttributePropertySelector& Selector) {
    return EPCGAttributePropertySelection::Attribute;
}

EPCGPointProperties UPCGAttributePropertySelectorBlueprintHelpers::GetPointProperty(const FPCGAttributePropertySelector& Selector) {
    return EPCGPointProperties::Density;
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

EPCGExtraProperties UPCGAttributePropertySelectorBlueprintHelpers::GetExtraProperty(const FPCGAttributePropertySelector& Selector) {
    return EPCGExtraProperties::Index;
}

TArray<FString> UPCGAttributePropertySelectorBlueprintHelpers::GetExtraNames(const FPCGAttributePropertySelector& Selector) {
    return TArray<FString>();
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetAttributeName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

FPCGAttributePropertyOutputSelector UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixSource(const FPCGAttributePropertyOutputSelector& Selector, const FPCGAttributePropertyInputSelector& InSelector) {
    return FPCGAttributePropertyOutputSelector{};
}

FPCGAttributePropertyInputSelector UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixLast(const FPCGAttributePropertyInputSelector& Selector, const UPCGData* InData) {
    return FPCGAttributePropertyInputSelector{};
}


