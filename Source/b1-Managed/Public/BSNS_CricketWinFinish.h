#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifyStateSection.h"
#include "BSNS_CricketWinFinish.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSNS_CricketWinFinish : public UMovieSceneCalliopeNotifyStateSection {
    GENERATED_BODY()
public:
    UBSNS_CricketWinFinish();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

