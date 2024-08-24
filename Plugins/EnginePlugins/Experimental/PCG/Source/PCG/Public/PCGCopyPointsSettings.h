#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyPointsInheritanceMode.h"
#include "EPCGCopyPointsMetadataInheritanceMode.h"
#include "PCGSettings.h"
#include "PCGCopyPointsSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGCopyPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode RotationInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode ScaleInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode ColorInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode SeedInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;
    
    UPCGCopyPointsSettings();

};

