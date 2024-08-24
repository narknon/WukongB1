#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "PCGComponentInstanceData.generated.h"

class UPCGComponent;
class UPCGManagedResource;

USTRUCT(BlueprintType)
struct FPCGComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGManagedResource*> GeneratedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGComponent* SourceComponent;
    
public:
    PCG_API FPCGComponentInstanceData();
};

