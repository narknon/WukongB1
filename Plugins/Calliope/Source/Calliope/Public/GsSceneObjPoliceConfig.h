#pragma once
#include "CoreMinimal.h"
#include "GsDynamicObstaclePoliceConfig.h"
#include "GsInteractorPoliceConfig.h"
#include "GsNPCUnitPoliceConfig.h"
#include "GsOverlapPoliceConfig.h"
#include "GsSpawnerPoliceConfig.h"
#include "GsStreamingLevelPoliceConfig.h"
#include "GsStreamingLevelStateConfigPoliceConfig.h"
#include "GsUnitPoliceConfig.h"
#include "GsSceneObjPoliceConfig.generated.h"

USTRUCT(BlueprintType)
struct FGsSceneObjPoliceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsDynamicObstaclePoliceConfig> DynamicObstacleCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsOverlapPoliceConfig> OverlapCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsInteractorPoliceConfig> InteractorCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsSpawnerPoliceConfig> SpawnerCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsUnitPoliceConfig> UnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsUnitPoliceConfig> GroupUnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsNPCUnitPoliceConfig> NPCUnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsStreamingLevelPoliceConfig> StreamingLevelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGsStreamingLevelStateConfigPoliceConfig> StreamingLevelStateConfigCollection;
    
    CALLIOPE_API FGsSceneObjPoliceConfig();
};

