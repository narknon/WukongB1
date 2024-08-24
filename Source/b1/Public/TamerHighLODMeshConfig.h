#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TamerHighLODMeshConfig.generated.h"

class UAnimationAsset;
class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FTamerHighLODMeshConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* BstdAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    B1_API FTamerHighLODMeshConfig();
};

