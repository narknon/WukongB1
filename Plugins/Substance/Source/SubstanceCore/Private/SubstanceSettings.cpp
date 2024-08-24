#include "SubstanceSettings.h"

USubstanceSettings::USubstanceSettings() {
    this->MemoryBudgetMb = 512;
    this->CPUCores = 32;
    this->AsyncLoadMipClip = 3;
    this->MaxAsyncSubstancesRenderedPerFrame = 10;
    this->DefaultGenerationMode = SGM_PlatformDefault;
    this->SubstanceEngine = SET_CPU;
    this->DefaultSubstanceOutputSizeX = Size_1024;
    this->DefaultSubstanceOutputSizeY = Size_1024;
}


