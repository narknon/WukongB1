#include "TressFXMeshAsset.h"

UTressFXMeshAsset::UTressFXMeshAsset() {
    this->EnableVisualizeMesh = false;
    this->EnableVisualizeMeshAABB = false;
    this->CollisionMeshBoxMargin = 2.00f;
    this->EnableVisualizeSDF = false;
    this->NumGridOffset = 1;
    this->SDFCollisionMargin = 0.05f;
}


