#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.h"
#include "PCGSettings.h"
#include "PCGHiGenGridSizeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGHiGenGridSizeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid HiGenGridSize;
    
public:
    UPCGHiGenGridSizeSettings();

};

