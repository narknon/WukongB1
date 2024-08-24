#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_ProceduralMapGeneratorDataConfigComp.generated.h"

class UBGWCustomLightConfigDataAsset;
class UBGWProceduralMapBlockMappingDataAsset;
class UBGWProceduralMapConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralMapGeneratorDataConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWProceduralMapConfigDataAsset* MapConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWProceduralMapBlockMappingDataAsset* MapBlockMappingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWCustomLightConfigDataAsset* MapCustsomLightConfigs;
    
    UBUS_ProceduralMapGeneratorDataConfigComp(const FObjectInitializer& ObjectInitializer);

};

