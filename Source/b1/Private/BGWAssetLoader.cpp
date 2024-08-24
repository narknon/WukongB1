#include "BGWAssetLoader.h"

UBGWAssetLoader::UBGWAssetLoader() {
}

int32 UBGWAssetLoader::SyncLoadObjects(const TArray<FSoftObjectPath>& LoadList, TArray<UObject*>& outObjList) {
    return 0;
}

UObject* UBGWAssetLoader::SyncLoadObject(const FSoftObjectPath& Path) {
    return NULL;
}

void UBGWAssetLoader::AsyncLoadObjects(TArray<FSoftObjectPath> LoadList, UBGWAssetLoaderRequest* request, int32 Priority) {
}

void UBGWAssetLoader::AsyncLoadObject(const FSoftObjectPath& LoadPath, UBGWAssetLoaderRequest* request, int32 Priority) {
}

void UBGWAssetLoader::AsyncLoadClass(const FSoftClassPath& LoadPath, UBGWAssetLoaderRequest* request, int32 Priority) {
}


