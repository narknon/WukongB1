#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWActorVisibilityVolumeManager.generated.h"

class ABGWActorVisibilityVolume;

UCLASS(Blueprintable)
class B1_API UBGWActorVisibilityVolumeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABGWActorVisibilityVolume*> ActorShownVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABGWActorVisibilityVolume*> ActorHiddenVolumes;
    
public:
    UBGWActorVisibilityVolumeManager();

};

