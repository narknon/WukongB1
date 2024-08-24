#include "OpacityMicroMapAsset.h"
#include "OpacityMicroMapCollection.h"

UOpacityMicroMapAsset::UOpacityMicroMapAsset() {
    this->Collection = CreateDefaultSubobject<UOpacityMicroMapCollection>(TEXT("OpacityMicroMapCollection"));
}


