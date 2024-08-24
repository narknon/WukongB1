#include "BUS_FixCameraTriggerConfigComp.h"

UBUS_FixCameraTriggerConfigComp::UBUS_FixCameraTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanRetriggerCount = 0;
    this->TargetCamera = NULL;
    this->BlendCameraDuration = 0.00f;
    this->BlendFunction = VTBlend_Linear;
    this->BlendExp = 0.00f;
}


