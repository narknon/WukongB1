#pragma once
#include "CoreMinimal.h"
#include "PCGManagedResource.h"
#include "PCGManagedActors.generated.h"

class AActor;

UCLASS(Blueprintable)
class PCG_API UPCGManagedActors : public UPCGManagedResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AActor>> GeneratedActors;
    
    UPCGManagedActors();

};

