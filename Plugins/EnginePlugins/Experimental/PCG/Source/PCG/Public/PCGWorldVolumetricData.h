#pragma once
#include "CoreMinimal.h"
#include "PCGVolumeData.h"
#include "PCGWorldVolumetricQueryParams.h"
#include "PCGWorldVolumetricData.generated.h"

class UPCGComponent;
class UWorld;

UCLASS(Blueprintable)
class PCG_API UPCGWorldVolumetricData : public UPCGVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPCGComponent> OriginatingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldVolumetricQueryParams QueryParams;
    
    UPCGWorldVolumetricData();

};

