#include "OMMBlueprintLibrary.h"

UOMMBlueprintLibrary::UOMMBlueprintLibrary() {
}

void UOMMBlueprintLibrary::RemoveOMMUserData(UStaticMesh* StaticMesh) {
}

bool UOMMBlueprintLibrary::IsThisDeviceSupportOMM(const UObject* WorldContextObject) {
    return false;
}

float UOMMBlueprintLibrary::CalculateCurrentWorldOMMTotalDataSize(const UObject* WorldContextObject) {
    return 0.0f;
}

void UOMMBlueprintLibrary::BuildAllStaticMesh(const UObject* WorldContextObject) {
}


