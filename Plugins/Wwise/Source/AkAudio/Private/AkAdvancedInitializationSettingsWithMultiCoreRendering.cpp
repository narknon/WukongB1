#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"

FAkAdvancedInitializationSettingsWithMultiCoreRendering::FAkAdvancedInitializationSettingsWithMultiCoreRendering() {
    this->EnableMultiCoreRendering = false;
    this->MaxNumJobWorkers = 0;
    this->JobWorkerMaxExecutionTimeUSec = 0;
}

