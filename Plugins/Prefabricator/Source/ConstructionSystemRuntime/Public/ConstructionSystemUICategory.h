#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemUIPrefabEntry.h"
#include "ConstructionSystemUICategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemUICategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionSystemUIPrefabEntry> PrefabEntries;
    
    FConstructionSystemUICategory();
};

