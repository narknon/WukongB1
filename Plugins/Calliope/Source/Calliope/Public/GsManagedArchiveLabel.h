#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedArchiveLabel.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedArchiveLabel : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArchiveLabel;
    
    FGsManagedArchiveLabel();
};

