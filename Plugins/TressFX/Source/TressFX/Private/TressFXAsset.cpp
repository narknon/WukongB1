#include "TressFXAsset.h"

UTressFXAsset::UTressFXAsset() {
    this->NumFollowStrandsPerGuide = 0;
    this->RootSeparationFactor = 0.00f;
    this->ClippingPercentage = 1.00f;
    this->SegmentDivisor = 1;
    this->HairLengthScale = 1.00f;
    this->NumVerticesFromRootNoSimulation = 2;
    this->TressFXBoneSkinningAsset = NULL;
    this->BaseSkeleton = NULL;
    this->bIsValid = true;
    this->RawGuideCount = 0;
    this->TotalStrandCount = 0;
    this->VertexCountPerStrand = 0;
    this->TotalVertexCount = 0;
    this->TotalTriangleCount = 0;
    this->NumDependHairGroups = 0;
}


