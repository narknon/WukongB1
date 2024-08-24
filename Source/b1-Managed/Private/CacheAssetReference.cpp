#include "CacheAssetReference.h"

UCacheAssetReference::UCacheAssetReference() {
    this->refCount = 0;
    this->AssetState = CacheAssetState::Unloaded;
    this->RefObj = NULL;
}


