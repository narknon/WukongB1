#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IKFootLocation.generated.h"

USTRUCT(BlueprintType)
struct FIKFootLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LimbRootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActualLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NewLocation;
    
    GSENGINEEXTENT_API FIKFootLocation();
};

