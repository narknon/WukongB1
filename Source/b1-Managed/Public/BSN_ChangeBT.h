#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "GameplayTagContainer.h"
#include "BSN_ChangeBT.generated.h"

class UBehaviorTree;
class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_ChangeBT : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UBSN_ChangeBT();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

