#pragma once
#include "CoreMinimal.h"
#include "PCGPropertyAliases.h"
#include "PCGSettingsOverridableParam.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FPCGSettingsOverridableParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PropertiesNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPCGPropertyAliases> MapOfAliases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNameClash;
    
    PCG_API FPCGSettingsOverridableParam();
};

