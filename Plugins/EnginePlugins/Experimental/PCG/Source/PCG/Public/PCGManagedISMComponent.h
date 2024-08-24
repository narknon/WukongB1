#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ISMPartition/ISMComponentDescriptor.h"
#include "PCGManagedComponent.h"
#include "PCGManagedISMComponent.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGManagedISMComponent : public UPCGManagedComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FISMComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootLocation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 SettingsUID;
    
public:
    UPCGManagedISMComponent();

};

