#include "BGUCollectionBase.h"
#include "BUS_CollectionConfigComp.h"
#include "BUS_CollectiontDataComp.h"

ABGUCollectionBase::ABGUCollectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_CollectiontDataComp>(TEXT("CollectiontDataComp"))) {
    this->CollectionConfigComp = CreateDefaultSubobject<UBUS_CollectionConfigComp>(TEXT("RebirthPointConfigSystem"));
}


