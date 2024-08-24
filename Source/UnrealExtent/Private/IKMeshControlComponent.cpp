#include "IKMeshControlComponent.h"

UIKMeshControlComponent::UIKMeshControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetMeshOwner = NULL;
    this->TargetMesh = NULL;
    this->DefaultMeshZOffset = 0.00f;
    this->bIsTraceDebug = false;
    this->bIsIKActive = true;
    this->IKFootLeftBoneName = TEXT("ik_foot_l");
    this->IKFootRightoneName = TEXT("ik_foot_r");
    this->MaxCheckSpeed = 120.00f;
    this->TraceDepth = 200.00f;
    this->OffsetLerpAlpha = 1.00f;
}


