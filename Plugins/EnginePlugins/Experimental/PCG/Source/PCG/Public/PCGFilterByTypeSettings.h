#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.h"
#include "PCGSettings.h"
#include "PCGFilterByTypeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGFilterByTypeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataType TargetType;
    
    UPCGFilterByTypeSettings();

};

