#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCGBoundsModifierMode.h"
#include "PCGSettings.h"
#include "PCGBoundsModifierSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGBoundsModifierSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGBoundsModifierMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectSteepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Steepness;
    
    UPCGBoundsModifierSettings();

};

