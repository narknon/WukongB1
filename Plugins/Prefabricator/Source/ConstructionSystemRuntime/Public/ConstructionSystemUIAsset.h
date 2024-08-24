#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConstructionSystemUICategory.h"
#include "ConstructionSystemUIAsset.generated.h"

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemUIAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MenuTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionSystemUICategory> Categories;
    
    UConstructionSystemUIAsset();

};

