#pragma once
#include "CoreMinimal.h"
#include "PrefabricatorAssetCollectionItem.generated.h"

class UPrefabricatorAsset;

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorAssetCollectionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FPrefabricatorAssetCollectionItem();
};

