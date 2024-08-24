#include "GSE_PostProcessFuncLib.h"

UGSE_PostProcessFuncLib::UGSE_PostProcessFuncLib() {
}

void UGSE_PostProcessFuncLib::SetPPVWeightedBlendableWeightByIndex(APostProcessVolume* PPV, int32 PPMatIndex, float Weight) {
}

void UGSE_PostProcessFuncLib::SetPPVWeightedBlendableWeight(APostProcessVolume* PPV, UMaterialInterface* PPMaterialInterface, float Weight) {
}

void UGSE_PostProcessFuncLib::SetPPCompWeightedBlendableWeightByIndex(UPostProcessComponent* PPComp, int32 PPMatIndex, float Weight) {
}

void UGSE_PostProcessFuncLib::SetPPCompWeightedBlendableWeight(UPostProcessComponent* PPComp, UMaterialInterface* PPMaterialInterface, float Weight) {
}

void UGSE_PostProcessFuncLib::SetCameraWeightedBlendableWeightByIndex(AActor* CameraActor, int32 PPMatIndex, float Weight) {
}

void UGSE_PostProcessFuncLib::SetCameraCompWeightedBlendableWeightByIndex(UCameraComponent* CameraComp, int32 PPMatIndex, float Weight) {
}

void UGSE_PostProcessFuncLib::RemovePPVWeightBlendable(APostProcessVolume* PPV, UMaterialInterface* PPMaterialInterface) {
}

void UGSE_PostProcessFuncLib::RemovePPCompWeightBlendable(UPostProcessComponent* PPComp, UMaterialInterface* PPMaterialInterface) {
}

FPostProcessSettings UGSE_PostProcessFuncLib::GetSceneViewFinalPostProcessSettings(AActor* WorldContext) {
    return FPostProcessSettings{};
}


