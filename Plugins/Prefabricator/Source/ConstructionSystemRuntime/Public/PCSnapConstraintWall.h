#pragma once
#include "CoreMinimal.h"
#include "PCSnapConstraintWall.generated.h"

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FPCSnapConstraintWall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachRight;
    
    FPCSnapConstraintWall();
};

