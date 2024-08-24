#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGSanityCheckPointDataSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSanityCheckPointDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPointCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPointCount;
    
    UPCGSanityCheckPointDataSettings();

};

