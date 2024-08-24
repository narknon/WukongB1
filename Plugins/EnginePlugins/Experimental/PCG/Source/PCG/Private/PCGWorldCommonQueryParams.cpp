#include "PCGWorldCommonQueryParams.h"

FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams() {
    this->bIgnorePCGHits = false;
    this->bIgnoreSelfHits = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->bTraceComplex = false;
    this->ActorTagFilter = EPCGWorldQueryFilterByTag::NoTagFilter;
    this->bIgnoreLandscapeHits = false;
    this->bGetReferenceToActorHit = false;
}

