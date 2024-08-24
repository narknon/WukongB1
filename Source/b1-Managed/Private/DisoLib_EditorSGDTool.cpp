#include "DisoLib_EditorSGDTool.h"

ADisoLib_EditorSGDTool::ADisoLib_EditorSGDTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SGDActor = NULL;
    this->AutoCompilingSaveAfterClean = false;
    this->CollisionPresetName = DispLibCollisionProfileNames::NoCollision;
    this->Override_CollisionEnable = false;
    this->CollisionEnable = ECollisionEnabled::NoCollision;
    this->Override_CollisionObjectType = false;
    this->CollisionObjectType = ECC_WorldStatic;
}

void ADisoLib_EditorSGDTool::CreateBoneComp() {
}

void ADisoLib_EditorSGDTool::CreateSubMeshComp() {
}

void ADisoLib_EditorSGDTool::CleanAllSubMeshComp() {
}

void ADisoLib_EditorSGDTool::AddTagToBoneChildComps() {
}

void ADisoLib_EditorSGDTool::CleanOneBoneSubMeshComp() {
}

void ADisoLib_EditorSGDTool::CreateOneBoneSubMeshComp() {
}

void ADisoLib_EditorSGDTool::CreateLevelActorFromUnit() {
}

void ADisoLib_EditorSGDTool::ToggleSubMeshCompVisable() {
}

void ADisoLib_EditorSGDTool::LogBoneChildCompsCPDData() {
}

void ADisoLib_EditorSGDTool::ToggleBoneChildCompsHidenInGame() {
}

void ADisoLib_EditorSGDTool::SetBoneChildCompsCollisionSetting() {
}

void ADisoLib_EditorSGDTool::CleanOneBoneSubMeshCompByDelectObjectsArray() {
}

void ADisoLib_EditorSGDTool::CleanOneBoneSubMeshCompByRetainObjectsArray() {
}


