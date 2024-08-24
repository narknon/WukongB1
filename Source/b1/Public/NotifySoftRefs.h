#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NotifySoftRefs.generated.h"

USTRUCT(BlueprintType)
struct FNotifySoftRefs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> SoftPaths;
    
    B1_API FNotifySoftRefs();
};

