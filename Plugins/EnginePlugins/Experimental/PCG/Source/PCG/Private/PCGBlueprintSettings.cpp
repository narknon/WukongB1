#include "PCGBlueprintSettings.h"
#include "Templates/SubclassOf.h"

UPCGBlueprintSettings::UPCGBlueprintSettings() {
    this->bUseSeed = true;
    this->BlueprintElementType = NULL;
    this->BlueprintElementInstance = NULL;
}

void UPCGBlueprintSettings::SetElementType(TSubclassOf<UPCGBlueprintElement> InElementType, UPCGBlueprintElement*& ElementInstance) {
}

TSubclassOf<UPCGBlueprintElement> UPCGBlueprintSettings::GetElementType() const {
    return NULL;
}


