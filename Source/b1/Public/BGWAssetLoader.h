#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGWAssetLoader.generated.h"

class UBGWAssetLoaderRequest;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGWAssetLoader : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGWAssetLoader();

    UFUNCTION(BlueprintCallable)
    static int32 SyncLoadObjects(const TArray<FSoftObjectPath>& LoadList, TArray<UObject*>& outObjList);
    
    UFUNCTION(BlueprintCallable)
    static UObject* SyncLoadObject(const FSoftObjectPath& Path);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoadObjects(TArray<FSoftObjectPath> LoadList, UBGWAssetLoaderRequest* request, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoadObject(const FSoftObjectPath& LoadPath, UBGWAssetLoaderRequest* request, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoadClass(const FSoftClassPath& LoadPath, UBGWAssetLoaderRequest* request, int32 Priority);
    
};

