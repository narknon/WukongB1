#pragma once
#include "CoreMinimal.h"
#include "PMLocationBoneSocketBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FPMLocationBoneSocketBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    GSENGINEEXTENT_API FPMLocationBoneSocketBoneInfo();
};

