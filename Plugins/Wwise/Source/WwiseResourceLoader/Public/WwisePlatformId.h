#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwisePlatformId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwisePlatformId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlatformGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformName;
    
    FWwisePlatformId();
};

