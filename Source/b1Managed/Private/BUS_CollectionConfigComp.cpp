#include "BUS_CollectionConfigComp.h"

UBUS_CollectionConfigComp::UBUS_CollectionConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectionDropID = 0;
    this->GroupId = 0;
    this->UnitClass = NULL;
    this->PlusUnitClass = NULL;
    this->ChiefUnitClass = NULL;
    this->OverWriterEventId = false;
    this->EventID = 0;
    this->PlusEventId = 0;
    this->ChiefEventId = 0;
}


