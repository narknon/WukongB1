#include "ConstructionSystemBuildTool.h"

UConstructionSystemBuildTool::UConstructionSystemBuildTool() {
    this->TraceDistance = 4000.00f;
    this->CursorRotationStepAngle = 15.00f;
    this->Cursor = NULL;
    this->ActivePrefabAsset = NULL;
}

void UConstructionSystemBuildTool::SetActivePrefab(UPrefabricatorAssetInterface* InActivePrefabAsset) {
}

void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps) {
}

void UConstructionSystemBuildTool::HandleInput_CursorMovePrev() {
}

void UConstructionSystemBuildTool::HandleInput_CursorMoveNext() {
}

void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor() {
}


