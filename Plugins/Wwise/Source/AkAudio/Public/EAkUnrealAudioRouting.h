#pragma once
#include "CoreMinimal.h"
#include "EAkUnrealAudioRouting.generated.h"

UENUM()
enum class EAkUnrealAudioRouting : int32 {
    Custom,
    Separate,
    AudioLink,
    AudioMixer,
    EnableWwiseOnly,
    EnableUnrealOnly,
};

