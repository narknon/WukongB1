#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifyStateSection.h"
#include "GameplayTagContainer.h"
#include "BSNS_StopAllAnimMontage.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSNS_StopAllAnimMontage : public UMovieSceneCalliopeNotifyStateSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakePlayerAsUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UBSNS_StopAllAnimMontage();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
};

