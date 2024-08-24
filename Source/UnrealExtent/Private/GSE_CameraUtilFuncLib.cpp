#include "GSE_CameraUtilFuncLib.h"

UGSE_CameraUtilFuncLib::UGSE_CameraUtilFuncLib() {
}

bool UGSE_CameraUtilFuncLib::SetLocalPlayerAspectRatioAxisConstraint(APlayerController* PlayerController, TEnumAsByte<EAspectRatioAxisConstraint> TargetAspectRatioAxisConstraint) {
    return false;
}

void UGSE_CameraUtilFuncLib::SetCameraFocalParams(UCameraComponent* InCamera, float InFocalDistance, float InDepthBlurKm, float DepthBlurRadius) {
}

bool UGSE_CameraUtilFuncLib::IsPositionInScreenViewport(UObject* WorldContext, const FVector& position) {
    return false;
}

AActor* UGSE_CameraUtilFuncLib::GetCameraViewTarget(APlayerCameraManager* CameraManager) {
    return NULL;
}

void UGSE_CameraUtilFuncLib::GetCameraFocalParams(UCameraComponent* InCamera, float& OutFocalDistance, float& OutDepthBlurKm, float& OutDepthBlurRadius) {
}


