#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkMediaAssetData*> MediaAssetDataPerPlatform;
    
public:
    UAkMediaAsset();

};

