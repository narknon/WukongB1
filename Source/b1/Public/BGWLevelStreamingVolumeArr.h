#pragma once
#include "CoreMinimal.h"
#include "BGWLevelStreamingVolumeArr.generated.h"

class ABGWLevelStreamingVolume;

USTRUCT(BlueprintType)
struct FBGWLevelStreamingVolumeArr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABGWLevelStreamingVolume*> VolumeArr;
    
    B1_API FBGWLevelStreamingVolumeArr();
};

