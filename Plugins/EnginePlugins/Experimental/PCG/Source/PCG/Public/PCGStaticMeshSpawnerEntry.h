#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "PCGStaticMeshSpawnerEntry.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct PCG_API FPCGStaticMeshSpawnerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
    FPCGStaticMeshSpawnerEntry();
};

