#include "WwiseExternalSourceMediaInfo.h"

FWwiseExternalSourceMediaInfo::FWwiseExternalSourceMediaInfo() {
    this->ExternalSourceMediaInfoId = 0;
    this->CodecID = 0;
    this->bIsStreamed = false;
    this->bUseDeviceMemory = false;
    this->MemoryAlignment = 0;
    this->PrefetchSize = 0;
}

