#include "GSPMLocationSkelVertSurface.h"

UGSPMLocationSkelVertSurface::UGSPMLocationSkelVertSurface() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bFinalUpdateModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->SourceType = VERTSURFACESOURCE_Vert;
    this->bUpdatePositionEachFrame = false;
    this->bOrientMeshEmitters = true;
    this->bInheritBoneVelocity = false;
    this->InheritVelocityScale = 1.00f;
    this->SkelMeshActorParamName = TEXT("VertSurfaceActor");
    this->SelectAllBoneOp = false;
    this->ClearAllBoneOp = false;
    this->bEnforceNormalCheck = false;
    this->NormalCheckToleranceDegrees = 0.00f;
    this->NormalCheckTolerance = 0.00f;
    this->bInheritVertexColor = false;
    this->bInheritUV = false;
    this->InheritUVChannel = 0;
}


