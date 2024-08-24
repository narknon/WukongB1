#include "GSE_SaveGameFuncLib.h"

UGSE_SaveGameFuncLib::UGSE_SaveGameFuncLib() {
}

bool UGSE_SaveGameFuncLib::SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex) {
    return false;
}

bool UGSE_SaveGameFuncLib::LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex) {
    return false;
}

TArray<FString> UGSE_SaveGameFuncLib::GetAllSaveGameSlotNames() {
    return TArray<FString>();
}


