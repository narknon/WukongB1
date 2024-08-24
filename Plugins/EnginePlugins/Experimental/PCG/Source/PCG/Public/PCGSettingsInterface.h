#pragma once
#include "CoreMinimal.h"
#include "PCGData.h"
#include "PCGSettingsInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSettingsInterface : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPCGSettingsInterface();

};

