#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGCrc.h"
#include "PCGManagedResource.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGManagedResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGCrc Crc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMarkedUnused;
    
public:
    UPCGManagedResource();

};

