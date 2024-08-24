#include "SpiderNavigation.h"

ASpiderNavigation::ASpiderNavigation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoLoadGrid = true;
    this->DebugLinesThickness = 0.00f;
}

bool ASpiderNavigation::LoadGrid() {
    return false;
}

int32 ASpiderNavigation::GetNavNodesCount() {
    return 0;
}

TArray<FVector> ASpiderNavigation::FindPath(FVector Start, FVector End, bool& bFoundCompletePath) {
    return TArray<FVector>();
}

bool ASpiderNavigation::FindNextLocationAndNormal(FVector CurrentLocation, FVector TargetLocation, FVector& NextLocation, FVector& Normal) {
    return false;
}

FVector ASpiderNavigation::FindClosestNodeNormal(FVector Location) {
    return FVector{};
}

FVector ASpiderNavigation::FindClosestNodeLocation(FVector Location) {
    return FVector{};
}

void ASpiderNavigation::DrawDebugRelations() {
}


