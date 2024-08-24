#include "JavascriptHeapStatistics.h"

FJavascriptHeapStatistics::FJavascriptHeapStatistics() {
    this->TotalHeapSize = 0;
    this->TotalHeapSizeExecutable = 0;
    this->TotalPhysicalSize = 0;
    this->TotalAvailableSize = 0;
    this->UsedHeapSize = 0;
    this->HeapSizeLimit = 0;
    this->MallocedMemory = 0;
    this->bDoesZapGarbage = false;
}

