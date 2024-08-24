#pragma once
#include "CoreMinimal.h"
#include "PCGSettingsInterface.h"
#include "PCGSettingsInstance.generated.h"

class UPCGSettings;

UCLASS(Blueprintable)
class PCG_API UPCGSettingsInstance : public UPCGSettingsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSettings* Settings;
    
    UPCGSettingsInstance();

};

