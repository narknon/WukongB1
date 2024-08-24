#include "DispLib_EditorTreeImposterTool.h"

ADispLib_EditorTreeImposterTool::ADispLib_EditorTreeImposterTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualSaveAssets = false;
    this->UseCustomSavePath = false;
    this->DefaultCardMicoScale = 0.00f;
    this->DefaultCardPairCount = 0;
    this->DefaultCaptureRTSize = 0;
    this->DefaultShotTextureSize = 0;
    this->DefaultTrunkMaskThreshold = 0.00f;
    this->DefaultLeafMaskThreshold = 0.00f;
    this->DebugPause = false;
    this->CurTaskIndex = 0;
    this->TreeMesh = NULL;
    this->BakeLOD = 0;
    this->CardPairCount = 0;
    this->CardMicoScale = 0.00f;
    this->CaptureRTSize = 0;
    this->ShotTextureSize = 0;
    this->TrunkMaskThreshold = 0.00f;
    this->LeafMaskThreshold = 0.00f;
    this->ImposterCardMeshAsset = NULL;
    this->ShadowMapCountEveryCard = 0;
    this->ForceResetExitstedMat = false;
    this->PerformanceMaterialUseOneTextureMode = false;
    this->AutoSetImposterMeshToTreeLOD = false;
    this->SaveImposterCardMesh = false;
    this->HDA_Asset = NULL;
    this->ToggleViewModeWaittngTime = 0.00f;
    this->RT_CustomShadowmap = NULL;
    this->SkySphereToolMat = NULL;
    this->MergeActorToolMat = NULL;
    this->ColorDilateToolMat = NULL;
    this->CustomShadowMapMat = NULL;
    this->DistanceFieldToolMat = NULL;
    this->CombineRGBAndAlphaToolMat = NULL;
    this->OriginImposterMatIns = NULL;
    this->OriginOneTexPerformanceImposterMatIns = NULL;
    this->OriginMultiTexPerformanceImposterMatIns = NULL;
    this->TreeActor = NULL;
    this->TreeStaticMeshComp = NULL;
    this->CopyFromHQMatIndex = 0;
    this->ShadowMapTreeActor = NULL;
    this->ShadowMapTreeStaticMeshComp = NULL;
    this->Capture2DActor = NULL;
    this->CaptureComponent2D = NULL;
    this->CameraActor = NULL;
    this->CameraComp = NULL;
    this->ShadowMapCameraActor = NULL;
    this->ShadowMapCameraComp = NULL;
    this->ShadowMapCapture2DActor = NULL;
    this->ShadowMapCaptureComponent2D = NULL;
    this->RT_4Capture_RGB = NULL;
    this->RT_4Capture_NearestFillterRGB = NULL;
    this->RT_4Capture_Alpha = NULL;
    this->RT_4Capture_FinalTex = NULL;
    this->isShadowMaskSceneShot = false;
    this->isPBRSceneShot = false;
    this->isCreateTreeImposter = false;
    this->ImposterMatInsAsset = NULL;
    this->ImposterMatPerformanceModeInsAsset = NULL;
}

void ADispLib_EditorTreeImposterTool::DoSetLOD() {
}

void ADispLib_EditorTreeImposterTool::ShowCompare() {
}

bool ADispLib_EditorTreeImposterTool::SetCurrentTask(int32 TaskIndex) {
    return false;
}

bool ADispLib_EditorTreeImposterTool::FillHoudiniData() {
    return false;
}

void ADispLib_EditorTreeImposterTool::ToggleDebugPause() {
}

void ADispLib_EditorTreeImposterTool::LogForwardVector() {
}

void ADispLib_EditorTreeImposterTool::CreateHDAInstance() {
}

bool ADispLib_EditorTreeImposterTool::CheckHDABakeResult() {
    return false;
}

void ADispLib_EditorTreeImposterTool::CleanAllToolAssets() {
}

void ADispLib_EditorTreeImposterTool::AutoImportSceneShot() {
}

void ADispLib_EditorTreeImposterTool::AutoDelectSceneShot() {
}

void ADispLib_EditorTreeImposterTool::SetNewLevelEnvActor(bool Visable) {
}

void ADispLib_EditorTreeImposterTool::RemoveAllInvalidTask() {
}

bool ADispLib_EditorTreeImposterTool::CheckTaskMeshValidity() {
    return false;
}

void ADispLib_EditorTreeImposterTool::SetAllTaskBakeZeroLOD() {
}

bool ADispLib_EditorTreeImposterTool::DoCombinedFinalTexture() {
    return false;
}

void ADispLib_EditorTreeImposterTool::DoSaveImposterCardMesh() {
}

bool ADispLib_EditorTreeImposterTool::CreatSceneShotToolActor() {
    return false;
}

void ADispLib_EditorTreeImposterTool::DoCreateTreeImposterTask() {
}

void ADispLib_EditorTreeImposterTool::ReleaseGeneratedTextures() {
}

void ADispLib_EditorTreeImposterTool::DoCleanTempMemoryResource() {
}

void ADispLib_EditorTreeImposterTool::SetTaskListFromFolderPath() {
}

void ADispLib_EditorTreeImposterTool::RemoveAllHasGSImposterTask() {
}

void ADispLib_EditorTreeImposterTool::CreatFinalImposterMaterial(bool ForceOverrideMat) {
}

void ADispLib_EditorTreeImposterTool::TestRenderCustomShadowMask(int32 cardIndex, int32 shadowMaskIndex) {
}

void ADispLib_EditorTreeImposterTool::ReceiveTick_Implementation(float DeltaSeconds) {
}

void ADispLib_EditorTreeImposterTool::DoPBRTextureRenderBySceneShot() {
}

void ADispLib_EditorTreeImposterTool::PythonCreatePerformanceTexture(const FString& NewCaptureRTSize, const FString& PerformanceMatInstanceAssetPath, const FString& ImposterCombinedStdTextureFolderPath, const FString& ImposterDataTextureFolderPath, const FString& NewTrunkMaskThreshold, const FString& NewLeafMaskThreshold) {
}

void ADispLib_EditorTreeImposterTool::DoShadowMaskTextureRenderBySceneShot() {
}


