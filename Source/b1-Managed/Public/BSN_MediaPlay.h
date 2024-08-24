#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "BSN_MediaPlay.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_MediaPlay : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UBSN_MediaPlay();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayName();
    
};

