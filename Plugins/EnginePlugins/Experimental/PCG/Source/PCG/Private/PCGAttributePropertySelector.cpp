#include "PCGAttributePropertySelector.h"

FPCGAttributePropertySelector::FPCGAttributePropertySelector() {
    this->Selection = EPCGAttributePropertySelection::Attribute;
    this->PointProperty = EPCGPointProperties::Density;
    this->ExtraProperty = EPCGExtraProperties::Index;
}

