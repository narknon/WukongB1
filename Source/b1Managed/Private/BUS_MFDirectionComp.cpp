#include "BUS_MFDirectionComp.h"

UBUS_MFDirectionComp::UBUS_MFDirectionComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DirectionUsage = MagicFieldDirectionUsage::None;
    this->DirectionType = MagicFieldDirectionType::None;
    this->DirectionTypeDetail = MagicFieldDirectionTypeDetail::Positive;
}


