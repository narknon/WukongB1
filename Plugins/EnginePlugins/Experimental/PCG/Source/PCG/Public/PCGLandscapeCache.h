#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGLandscapeCache.generated.h"

UCLASS(Blueprintable)
class UPCGLandscapeCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> CachedLayerNames;
    
public:
    UPCGLandscapeCache();

};

