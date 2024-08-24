#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedStreamingLevelStateConfig.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedStreamingLevelStateConfig : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataAssetID;
    
    FGsManagedStreamingLevelStateConfig();
};

