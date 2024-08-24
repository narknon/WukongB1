#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "MapCatFlag.h"
#include "BGWProceduralMapBlockMappingDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWProceduralMapBlockMappingDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<MapCatFlag, FSoftObjectPath> MapBlockMapping;
    
    UBGWProceduralMapBlockMappingDataAsset();

};

