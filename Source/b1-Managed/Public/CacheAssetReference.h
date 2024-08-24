#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CacheAssetState.h"
#include "CacheAssetReference.generated.h"

UCLASS(Blueprintable)
class UCacheAssetReference : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 refCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CacheAssetState AssetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* RefObj;
    
    UCacheAssetReference();

};

