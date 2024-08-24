#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "MovieSceneCalliopeSectionData.h"
#include "SequenceSectionContext_PostAudioOnUnit.generated.h"

class UAkCallbackInfo;

UCLASS(Blueprintable)
class USequenceSectionContext_PostAudioOnUnit : public UMovieSceneCalliopeSectionData {
    GENERATED_BODY()
public:
    USequenceSectionContext_PostAudioOnUnit();

    UFUNCTION(BlueprintCallable)
    void PostEventCallbackHandler(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

