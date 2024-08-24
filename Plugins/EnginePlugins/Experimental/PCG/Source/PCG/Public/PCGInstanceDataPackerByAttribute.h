#pragma once
#include "CoreMinimal.h"
#include "PCGInstanceDataPackerBase.h"
#include "PCGInstanceDataPackerByAttribute.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttributeNames;
    
    UPCGInstanceDataPackerByAttribute();

};

