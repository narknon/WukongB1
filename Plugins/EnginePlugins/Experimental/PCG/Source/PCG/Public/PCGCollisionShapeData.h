#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGCollisionShapeData.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedStrictBounds;
    
public:
    UPCGCollisionShapeData();

};

