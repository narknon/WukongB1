#include "BAIT_FlyMoveTo.h"

UBAIT_FlyMoveTo::UBAIT_FlyMoveTo() {
    this->BTTargetType = EBTTargetType::Target;
    this->MinimumProximityRequired = 2000.00f;
    this->bVisualizePawnAsVoxels = false;
    this->bTeleportToDestinationUponFailure = false;
}

void UBAIT_FlyMoveTo::Pathfinding_OnFinish(FDoNNavigationQueryData Data) {
}

void UBAIT_FlyMoveTo::Pathfinding_OnDynamicCollisionAlert(FDonNavigationDynamicCollisionPayload Data) {
}


