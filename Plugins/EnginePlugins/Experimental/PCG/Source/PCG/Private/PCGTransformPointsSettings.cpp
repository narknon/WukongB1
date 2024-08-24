#include "PCGTransformPointsSettings.h"

UPCGTransformPointsSettings::UPCGTransformPointsSettings() {
    this->bUseSeed = true;
    this->bApplyToAttribute = false;
    this->bAbsoluteOffset = false;
    this->bAbsoluteRotation = false;
    this->bAbsoluteScale = false;
    this->bUniformScale = true;
    this->bRecomputeSeed = false;
}


