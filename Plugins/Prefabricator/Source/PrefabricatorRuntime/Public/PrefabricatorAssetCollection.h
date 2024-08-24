#pragma once
#include "CoreMinimal.h"
#include "PrefabricatorAssetCollectionItem.h"
#include "PrefabricatorAssetInterface.h"
#include "PrefabricatorAssetCollection.generated.h"

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabricatorAssetCollectionItem> Prefabs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPrefabricatorAssetCollection();

};

