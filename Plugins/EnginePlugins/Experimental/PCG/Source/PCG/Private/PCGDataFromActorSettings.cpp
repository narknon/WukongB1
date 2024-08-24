#include "PCGDataFromActorSettings.h"

UPCGDataFromActorSettings::UPCGDataFromActorSettings() {
    this->Mode = EPCGGetDataFromActorMode::ParseActorComponents;
    this->bMergeSinglePointData = false;
    this->bDisplayModeSettings = true;
}


