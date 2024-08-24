#include "BANS_GSCollisionResponseToChannel.h"

UBANS_GSCollisionResponseToChannel::UBANS_GSCollisionResponseToChannel() {
    this->ApplyToCapsule = true;
    this->ApplyToMesh = false;
    this->bNotReset = false;
}

void UBANS_GSCollisionResponseToChannel::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

TArray<int32> UBANS_GSCollisionResponseToChannel::GetCollisionChannelIndex_Mesh() const {
    return TArray<int32>();
}

void UBANS_GSCollisionResponseToChannel::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

TArray<int32> UBANS_GSCollisionResponseToChannel::GetCollisionChannelIndex_Capsule() const {
    return TArray<int32>();
}


