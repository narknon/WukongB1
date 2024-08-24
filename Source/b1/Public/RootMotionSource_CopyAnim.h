#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_CopyAnim.generated.h"

USTRUCT(BlueprintType)
struct B1_API FRootMotionSource_CopyAnim : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AnimRootMotionTransform;
    
    FRootMotionSource_CopyAnim();
};

