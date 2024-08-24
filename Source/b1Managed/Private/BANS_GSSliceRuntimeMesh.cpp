#include "BANS_GSSliceRuntimeMesh.h"

UBANS_GSSliceRuntimeMesh::UBANS_GSSliceRuntimeMesh() {
    this->SliceLength = 0.00f;
    this->ApplyForce = 0.00f;
    this->bIsReflexAngle = false;
    this->bShowDebug = false;
}

void UBANS_GSSliceRuntimeMesh::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSliceRuntimeMesh::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSSliceRuntimeMesh::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


