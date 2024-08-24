#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGSARTERIES_PLACEMENT_LEVEL.h"
#include "EGSATERIES_PLACEMENT_TYPE.h"
#include "GSArteriesPlacementInfo.generated.h"

USTRUCT(BlueprintType)
struct FGSArteriesPlacementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSARTERIES_PLACEMENT_LEVEL eCurEnumLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSATERIES_PLACEMENT_TYPE ePlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PlacedSoftPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds PlacedBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform NoisedTransform;
    
    GSEARTERIES_API FGSArteriesPlacementInfo();
};

