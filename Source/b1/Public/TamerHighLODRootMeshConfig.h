#pragma once
#include "CoreMinimal.h"
#include "TamerHighLODMeshConfig.h"
#include "TamerHighLODRootMeshConfig.generated.h"

USTRUCT(BlueprintType)
struct FTamerHighLODRootMeshConfig : public FTamerHighLODMeshConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTamerHighLODMeshConfig> SubMeshes;
    
    B1_API FTamerHighLODRootMeshConfig();
};

