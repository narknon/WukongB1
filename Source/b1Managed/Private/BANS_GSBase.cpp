#include "BANS_GSBase.h"

UBANS_GSBase::UBANS_GSBase() {
}

void UBANS_GSBase::GSValidateInputCS_Implementation(AActor* Actor) const {
}

TArray<FSoftObjectPath> UBANS_GSBase::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}

int32 UBANS_GSBase::GSNotifyDebugPreEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBANS_GSBase::GSNotifyDebugPostEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBANS_GSBase::GSNotifyDebugPreTickCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBANS_GSBase::GSNotifyDebugPreBeginCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBANS_GSBase::GSNotifyDebugPostTickCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBANS_GSBase::GSNotifyDebugPostBeginCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}


