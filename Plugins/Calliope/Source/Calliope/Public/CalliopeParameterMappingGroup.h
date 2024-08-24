#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CalliopeParameterMapping.h"
#include "CalliopeParameterMappingGroup.generated.h"

USTRUCT(BlueprintType)
struct FCalliopeParameterMappingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCalliopeParameterMapping> Mappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    CALLIOPE_API FCalliopeParameterMappingGroup();
};

