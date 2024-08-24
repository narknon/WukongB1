#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSettings.h"
#include "PCGUserParameterGetSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGUserParameterGetSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PropertyGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPCGUserParameterGetSettings();

};

