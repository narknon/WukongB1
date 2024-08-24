#include "BED_MovieNode_PerformerHiddenInGame.h"

UBED_MovieNode_PerformerHiddenInGame::UBED_MovieNode_PerformerHiddenInGame() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bHiddenInGame = false;
}

FString UBED_MovieNode_PerformerHiddenInGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


