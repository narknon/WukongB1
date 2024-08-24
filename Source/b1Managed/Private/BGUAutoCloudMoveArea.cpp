#include "BGUAutoCloudMoveArea.h"
#include "BUS_AutoCloudMoveAreaConfigComp.h"
#include "BUS_AutoCloudMoveAreaDataComp.h"

ABGUAutoCloudMoveArea::ABGUAutoCloudMoveArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_AutoCloudMoveAreaDataComp>(TEXT("AutoCloudMoveArea"))) {
    this->AutoCloudMoveAreaConfigComp = CreateDefaultSubobject<UBUS_AutoCloudMoveAreaConfigComp>(TEXT("AutoCloudMoveAreaConfigComp"));
}


