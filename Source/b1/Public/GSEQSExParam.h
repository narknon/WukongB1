#pragma once
#include "CoreMinimal.h"
#include "EBGURunEQSObjReason.h"
#include "GSEQSExParam.generated.h"

USTRUCT(BlueprintType)
struct B1_API FGSEQSExParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGURunEQSObjReason RunEQSObjReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExParam_Bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExParam_Int;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExParam_Int2;
    
    FGSEQSExParam();
};

