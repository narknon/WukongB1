#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ProceduralSpawnCharaterConfig.h"
#include "BGWProceduralSpawnCharacterWaveConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWProceduralSpawnCharacterWaveConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralSpawnCharaterConfig ProceduralSpawnCharaterConfig;
    
    UBGWProceduralSpawnCharacterWaveConfigDataAsset();

};

