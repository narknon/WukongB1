#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGWorldRayHitQueryParams.h"
#include "PCGWorldRayHitSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGWorldRayHitSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldRayHitQueryParams QueryParams;
    
    UPCGWorldRayHitSettings();

};

