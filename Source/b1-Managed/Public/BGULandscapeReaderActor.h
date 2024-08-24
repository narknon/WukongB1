#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGULandscapeReaderActor.generated.h"

class ALandscapeProxy;
class ULandscapeReader;

UCLASS(Blueprintable)
class ABGULandscapeReaderActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscapeProxy* LandscapeProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeReader* LandscapeReader;
    
    ABGULandscapeReaderActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CacheLandscapeData();
    
};

