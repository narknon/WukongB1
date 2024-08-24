#pragma once
#include "CoreMinimal.h"
#include "PMLocationSkelVertSurfaceBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FPMLocationSkelVertSurfaceBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    GSENGINEEXTENT_API FPMLocationSkelVertSurfaceBoneInfo();
};

