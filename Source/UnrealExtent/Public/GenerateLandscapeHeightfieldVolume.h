#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GenerateLandscapeHeightfieldVolume.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UNREALEXTENT_API ADEPRECATED_GenerateLandscapeHeightfieldVolume : public AVolume {
    GENERATED_BODY()
public:
    ADEPRECATED_GenerateLandscapeHeightfieldVolume(const FObjectInitializer& ObjectInitializer);

};

