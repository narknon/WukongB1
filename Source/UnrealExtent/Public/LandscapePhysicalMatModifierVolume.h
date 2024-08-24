#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "LandscapePhysicalMatModifierVolume.generated.h"

class AGenerateLandscapeVolume;
class ALandscape;

UCLASS(Blueprintable)
class UNREALEXTENT_API ALandscapePhysicalMatModifierVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGenerateLandscapeVolume* GenerateVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALandscape* LandscapeActor;
    
public:
    ALandscapePhysicalMatModifierVolume(const FObjectInitializer& ObjectInitializer);

};

