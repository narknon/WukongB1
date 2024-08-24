#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "BSN_NotifyPlayEnd.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_NotifyPlayEnd : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UBSN_NotifyPlayEnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

