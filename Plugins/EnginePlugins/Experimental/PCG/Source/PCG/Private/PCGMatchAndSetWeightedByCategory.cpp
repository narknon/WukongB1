#include "PCGMatchAndSetWeightedByCategory.h"

UPCGMatchAndSetWeightedByCategory::UPCGMatchAndSetWeightedByCategory() {
    this->CategoryType = EPCGMetadataTypes::Double;
    this->CategoryStringMode = EPCGMetadataTypesConstantStructStringMode::String;
    this->bShouldMutateSeed = true;
}


