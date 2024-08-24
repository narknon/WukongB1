#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "LandscapeHeightModifierVolume.generated.h"

class AGenerateLandscapeVolume;
class ALandscape;

UCLASS(Blueprintable)
class UNREALEXTENT_API ALandscapeHeightModifierVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGenerateLandscapeVolume* GenerateVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALandscape* LandscapeActor;
    
public:
    ALandscapeHeightModifierVolume(const FObjectInitializer& ObjectInitializer);

};

