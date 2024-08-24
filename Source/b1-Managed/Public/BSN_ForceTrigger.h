#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "GameplayTagContainer.h"
#include "BSN_ForceTrigger.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_ForceTrigger : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerActorGuid;
    
    UBSN_ForceTrigger();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

