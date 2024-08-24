#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifyStateSection.h"
#include "GameplayTagContainer.h"
#include "BSNS_DisablePhysicalMove.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSNS_DisablePhysicalMove : public UMovieSceneCalliopeNotifyStateSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UBSNS_DisablePhysicalMove();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
};

