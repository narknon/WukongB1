#pragma once
#include "CoreMinimal.h"
#include "PCGManagedResource.h"
#include "PCGManagedComponent.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class PCG_API UPCGManagedComponent : public UPCGManagedResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UActorComponent> GeneratedComponent;
    
    UPCGManagedComponent();

};

