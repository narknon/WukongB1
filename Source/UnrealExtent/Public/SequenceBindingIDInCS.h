#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequenceBindingIDInCS.generated.h"

USTRUCT(BlueprintType)
struct FSequenceBindingIDInCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UNREALEXTENT_API FSequenceBindingIDInCS();
};

