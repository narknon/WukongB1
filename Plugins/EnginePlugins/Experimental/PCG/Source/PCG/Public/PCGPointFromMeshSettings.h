#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPointFromMeshSettings.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class PCG_API UPCGPointFromMeshSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshPathAttributeName;
    
    UPCGPointFromMeshSettings();

};

