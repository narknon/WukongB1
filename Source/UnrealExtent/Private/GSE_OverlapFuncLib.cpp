#include "GSE_OverlapFuncLib.h"

UGSE_OverlapFuncLib::UGSE_OverlapFuncLib() {
}

bool UGSE_OverlapFuncLib::BoxOverlapComponentsByProfile(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, FName ProfileName, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UGSE_OverlapFuncLib::BoxOverlapActorsByProfile(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, FName ProfileName, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}


