#include "BGWBeAtkPhysAnimDataAsset.h"

UBGWBeAtkPhysAnimDataAsset::UBGWBeAtkPhysAnimDataAsset() {
    this->PhysWeightCurve = NULL;
    this->MotorStrengthCurve = NULL;
    this->HitImpulse = 0.00f;
    this->bPartPhysics = false;
    this->bHitOnPelvis = false;
    this->bScaledByTotalMass = false;
    this->bCanHitSpine = false;
}


