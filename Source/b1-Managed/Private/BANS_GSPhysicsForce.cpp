#include "BANS_GSPhysicsForce.h"

UBANS_GSPhysicsForce::UBANS_GSPhysicsForce() {
    this->PhysicsForceType = PhysicsForceType::DirectionalForce;
    this->ForceFieldSize = 0.00f;
    this->DestructibleDamage = 0.00f;
    this->ImpulseStrength = 0.00f;
    this->IsDrawDebugShape = false;
}

void UBANS_GSPhysicsForce::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSPhysicsForce::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSPhysicsForce::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


