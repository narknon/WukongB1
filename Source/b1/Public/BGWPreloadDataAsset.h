#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWPreloadDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class B1_API UBGWPreloadDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> PreloadAssets;
    
    UBGWPreloadDataAsset();

};

