#include "PCGCopyPointsSettings.h"

UPCGCopyPointsSettings::UPCGCopyPointsSettings() {
    this->RotationInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->ScaleInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->ColorInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->SeedInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->AttributeInheritance = EPCGCopyPointsMetadataInheritanceMode::SourceFirst;
}


