#include "PCGPointMatchAndSetSettings.h"
#include "PCGMatchAndSetWeighted.h"
#include "Templates/SubclassOf.h"

UPCGPointMatchAndSetSettings::UPCGPointMatchAndSetSettings() {
    this->MatchAndSetType = UPCGMatchAndSetWeighted::StaticClass();
    this->MatchAndSetInstance = NULL;
    this->SetTargetType = EPCGMetadataTypes::Double;
    this->SetTargetStringMode = EPCGMetadataTypesConstantStructStringMode::String;
}

void UPCGPointMatchAndSetSettings::SetMatchAndSetType(TSubclassOf<UPCGMatchAndSetBase> InMatchAndSetType) {
}


