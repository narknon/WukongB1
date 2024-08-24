#include "BGWProceduralMapConfigDataAsset.h"

UBGWProceduralMapConfigDataAsset::UBGWProceduralMapConfigDataAsset() {
    this->MapType = ProceduralMapType::PROCEDURAL_DUNGEON;
    this->MapWidth = 0;
    this->MapHeight = 0;
    this->BlockWidth = 0;
    this->BlockHeight = 0;
    this->IsUsingRanEE = false;
    this->EntranceX = 0;
    this->EntranceY = 0;
    this->ExitX = 0;
    this->ExitY = 0;
    this->ExpectedPointNumber = 0;
    this->MinPointWidth = 0;
    this->MinPointHeight = 0;
    this->MaxPointWidth = 0;
    this->MaxPointHeight = 0;
}


