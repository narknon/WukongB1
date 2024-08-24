#include "WwiseEventInfo.h"

FWwiseEventInfo::FWwiseEventInfo() {
    this->SwitchContainerLoading = EWwiseEventSwitchContainerLoading::AlwaysLoad;
    this->DestroyOptions = EWwiseEventDestroyOptions::StopEventOnDestroy;
}

