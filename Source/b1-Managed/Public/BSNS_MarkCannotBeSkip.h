#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifyStateSection.h"
#include "BSNS_MarkCannotBeSkip.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSNS_MarkCannotBeSkip : public UMovieSceneCalliopeNotifyStateSection {
    GENERATED_BODY()
public:
    UBSNS_MarkCannotBeSkip();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

