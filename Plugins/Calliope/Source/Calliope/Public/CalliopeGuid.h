#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FCalliopeGuid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 D;
    
    FCalliopeGuid();
};
FORCEINLINE uint32 GetTypeHash(const FCalliopeGuid) { return 0; }

