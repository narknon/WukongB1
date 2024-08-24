#include "ConstructionSystemCursor.h"

UConstructionSystemCursor::UConstructionSystemCursor() {
    this->CursorGhostActor = NULL;
    this->CursorSeed = 0;
    this->CursorMaterial = NULL;
    this->CursorInvalidMaterial = NULL;
    this->ActiveSnapComponentIndex = 0;
}


