#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_GlobalFoliageInteractSoundConfig.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UBGWDataAsset_GlobalFoliageInteractSoundConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAudioEvent*> SoundMap;
    
    UBGWDataAsset_GlobalFoliageInteractSoundConfig();

};

