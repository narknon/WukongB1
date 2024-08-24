#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCGPointExtentsModifierMode.h"
#include "PCGSettings.h"
#include "PCGPointExtentsModifierSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGPointExtentsModifierSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointExtentsModifierMode Mode;
    
    UPCGPointExtentsModifierSettings();

};

