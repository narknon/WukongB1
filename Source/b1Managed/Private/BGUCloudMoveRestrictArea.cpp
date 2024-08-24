#include "BGUCloudMoveRestrictArea.h"
#include "BUS_CloudMoveRestrictAreaConfigComp.h"
#include "BUS_CloudMoveRestrictAreaDataComp.h"

ABGUCloudMoveRestrictArea::ABGUCloudMoveRestrictArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_CloudMoveRestrictAreaDataComp>(TEXT("DataComp"))) {
    this->CloudMoveRestrictAreaConfigComp = CreateDefaultSubobject<UBUS_CloudMoveRestrictAreaConfigComp>(TEXT("CloudMoveRestrictAreaConfigComp"));
}


