#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemUIPrefabEntry.generated.h"

class UPrefabricatorAssetInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemUIPrefabEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabricatorAssetInterface* Prefab;
    
    FConstructionSystemUIPrefabEntry();
};

