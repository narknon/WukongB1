#include "BGWPlayerController.h"

ABGWPlayerController::ABGWPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}




bool ABGWPlayerController::GetViewportClientMousePosition(FVector2D& MousePosition) {
    return false;
}

int32 ABGWPlayerController::GetPlayerInputTouchesCount() const {
    return 0;
}

FVector ABGWPlayerController::GetPlayerInputTouch(int32 Idx) const {
    return FVector{};
}

bool ABGWPlayerController::BGWGetHitResultAtScreenPosition(const FVector2D ScreenPosition, const TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool ABGWPlayerController::BGWDeprojectScreenToWorld(const FVector2D& ScreenPosition, FVector& RayOrigin, FVector& RayDirection) {
    return false;
}


