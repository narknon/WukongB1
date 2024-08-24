#include "PCGParamData.h"
#include "PCGMetadata.h"

UPCGParamData::UPCGParamData() {
    this->MetaData = CreateDefaultSubobject<UPCGMetadata>(TEXT("MetaData"));
    this->bHasCachedLastSelector = false;
}

UPCGMetadata* UPCGParamData::MutableMetadata() {
    return NULL;
}

int64 UPCGParamData::FindOrAddMetadataKey(const FName& InName) {
    return 0;
}

int64 UPCGParamData::FindMetadataKey(const FName& InName) const {
    return 0;
}

UPCGParamData* UPCGParamData::FilterParamsByName(const FName& InName) const {
    return NULL;
}

UPCGParamData* UPCGParamData::FilterParamsByKey(int64 InKey) const {
    return NULL;
}

UPCGMetadata* UPCGParamData::ConstMetadata() const {
    return NULL;
}


