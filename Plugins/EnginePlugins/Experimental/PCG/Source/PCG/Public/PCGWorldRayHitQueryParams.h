#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGWorldCommonQueryParams.h"
#include "PCGWorldRayHitQueryParams.generated.h"

USTRUCT(BlueprintType)
struct FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyMetadataFromLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetReferenceToPhysicalMaterial;
    
    PCG_API FPCGWorldRayHitQueryParams();
};

