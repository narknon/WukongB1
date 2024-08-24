#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "BGWLevelStreamingStateVolume.generated.h"

UCLASS(Blueprintable)
class B1_API ABGWLevelStreamingStateVolume : public AVolume {
    GENERATED_BODY()
public:
    ABGWLevelStreamingStateVolume(const FObjectInitializer& ObjectInitializer);

};

