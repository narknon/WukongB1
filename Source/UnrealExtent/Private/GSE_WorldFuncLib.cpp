#include "GSE_WorldFuncLib.h"

UGSE_WorldFuncLib::UGSE_WorldFuncLib() {
}

bool UGSE_WorldFuncLib::WorldViewportForeground(UWorld* World) {
    return false;
}

bool UGSE_WorldFuncLib::WorldViewportCursorVisible(UWorld* World) {
    return false;
}

ULevel* UGSE_WorldFuncLib::WorldGetPersistentLevel(UWorld* World) {
    return NULL;
}

ULevel* UGSE_WorldFuncLib::WorldGetCurrentLevel(UWorld* World) {
    return NULL;
}

void UGSE_WorldFuncLib::NotifyWorldSettingsMatchStart(UWorld* World) {
}

void UGSE_WorldFuncLib::NotifyWorldSettingsBeginPlay(UWorld* World) {
}

AWorldSettings* UGSE_WorldFuncLib::GetWorldSettings(ULevel* Level, bool bChecked) {
    return NULL;
}


