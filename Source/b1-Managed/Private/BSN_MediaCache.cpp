#include "BSN_MediaCache.h"

UBSN_MediaCache::UBSN_MediaCache() {
    this->MediaId = 0;
}

void UBSN_MediaCache::OnNotify_Implementation(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards) {
}

FString UBSN_MediaCache::GetDisplayName_Implementation() {
    return TEXT("");
}


