#pragma once
#include "CoreMinimal.h"
#include "PCGInstanceDataPackerBase.h"
#include "PCGInstanceDataPackerByRegex.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegexPatterns;
    
    UPCGInstanceDataPackerByRegex();

};

