#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "PrefabricatorAssetUserData.generated.h"

class APrefabActor;

UCLASS(Blueprintable, EditInlineNew)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APrefabActor> PrefabActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ItemId;
    
    UPrefabricatorAssetUserData();

};

