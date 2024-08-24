#pragma once
#include "CoreMinimal.h"
#include "IntPtr.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FIntPtr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HigherBits;
    
    FIntPtr();
};

