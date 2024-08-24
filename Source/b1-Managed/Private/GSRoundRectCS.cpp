#include "GSRoundRectCS.h"

UGSRoundRectCS::UGSRoundRectCS() {
    this->DebugDrawWidget = NULL;
}

void UGSRoundRectCS::DebugTick() {
}

bool UGSRoundRectCS::GetDebugDraw() {
    return false;
}

void UGSRoundRectCS::SetDebugDraw(bool IsDebugDraw) {
}

bool UGSRoundRectCS::IsInRoundRect(FVector2D PosInViewPort) {
    return false;
}

void UGSRoundRectCS::GSOnConstruct() {
}

void UGSRoundRectCS::GSStartDebugDraw() {
}

FVector2D UGSRoundRectCS::GetLastUpdateCenterPos() {
    return FVector2D{};
}

bool UGSRoundRectCS::CalcMappingRoundRectPoint_Implementation(FVector2D PosInViewPort, bool IsInFront, FVector2D InnerContentRectSize, FVector2D InnerContentRectAlign, bool IsOuter, FVector2D& BorderPosRefRoundRect, float& RectAngle, int32& OutIndicatorType) {
    return false;
}


