#include "BAN_GSBase.h"

UBAN_GSBase::UBAN_GSBase() {
}

void UBAN_GSBase::GSValidateInputCS_Implementation(AActor* Actor) const {
}

TArray<FSoftObjectPath> UBAN_GSBase::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}

int32 UBAN_GSBase::GSPreNotifyDebugCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}

int32 UBAN_GSBase::GSPostNotifyDebugCS_Implementation(FUStGSNotifyParam NotifyParam) const {
    return 0;
}


