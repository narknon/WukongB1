#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "BGWCustomLightConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWCustomLightConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> MapCustsomLightConfigs;
    
    UBGWCustomLightConfigDataAsset();

};

