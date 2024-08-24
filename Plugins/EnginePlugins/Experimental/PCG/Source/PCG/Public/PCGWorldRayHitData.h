#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSurfaceData.h"
#include "PCGWorldRayHitQueryParams.h"
#include "PCGWorldRayHitData.generated.h"

class UPCGComponent;
class UWorld;

UCLASS(Blueprintable)
class PCG_API UPCGWorldRayHitData : public UPCGSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPCGComponent> OriginatingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldRayHitQueryParams QueryParams;
    
    UPCGWorldRayHitData();

};

