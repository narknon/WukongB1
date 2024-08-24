#include "BlueprintSearchResult.h"

FBlueprintSearchResult::FBlueprintSearchResult() {
    this->bIsInProgress = false;
    this->PingInMs = 0;
    this->CurrentPlayers = 0;
    this->MaxPlayers = 0;
}

