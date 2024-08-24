#include "PCGWorldRayHitQueryParams.h"

FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams() {
    this->bOverrideDefaultParams = false;
    this->RayLength = 0.00f;
    this->bApplyMetadataFromLandscape = false;
    this->bGetReferenceToPhysicalMaterial = false;
}

