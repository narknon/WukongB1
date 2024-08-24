#include "PCGPointData.h"

UPCGPointData::UPCGPointData() {
}

void UPCGPointData::SetPoints(const TArray<FPCGPoint>& InPoints) {
}

TArray<FPCGPoint> UPCGPointData::GetPoints() const {
    return TArray<FPCGPoint>();
}

FPCGPoint UPCGPointData::GetPoint(int32 Index) const {
    return FPCGPoint{};
}

void UPCGPointData::CopyPointsFrom(const UPCGPointData* InData, const TArray<int32>& InDataIndices) {
}


