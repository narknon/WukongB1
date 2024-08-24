#include "GSPMLocationBoneSocket.h"

UGSPMLocationBoneSocket::UGSPMLocationBoneSocket() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bFinalUpdateModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->SourceType = BONESOCKETSOURCE_Sockets;
    this->SelectAllBoneOp = false;
    this->ClearAllBoneOp = false;
    this->SelectionMethod = BONESOCKETSEL_Sequential;
    this->bUpdatePositionEachFrame = true;
    this->bOrientMeshEmitters = true;
    this->bInheritBoneVelocity = false;
    this->InheritVelocityScale = 1.00f;
    this->SkelMeshActorParamName = TEXT("BoneSocketActor");
    this->NumPreSelectedIndices = 10;
    this->bAlwaysKeepWorldScale = true;
    this->RefScaleSocketNameInMesh = TEXT("Root");
}


