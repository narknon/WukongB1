#pragma once
#include "CoreMinimal.h"
#include "AkReverbDescriptor.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkReverbDescriptor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Primitive;
    
public:
    FAkReverbDescriptor();
};

