#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "BSN_DetachCameraInSkillSequence.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_DetachCameraInSkillSequence : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UBSN_DetachCameraInSkillSequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

