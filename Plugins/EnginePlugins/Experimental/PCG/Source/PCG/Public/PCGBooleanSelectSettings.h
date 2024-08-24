#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGBooleanSelectSettings.generated.h"

UCLASS(Blueprintable)
class UPCGBooleanSelectSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputB;
    
    UPCGBooleanSelectSettings();

};

