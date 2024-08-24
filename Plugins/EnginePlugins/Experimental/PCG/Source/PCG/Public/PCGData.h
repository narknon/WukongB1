#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGData.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 UID;
    
    UPCGData();

};

