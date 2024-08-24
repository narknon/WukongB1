#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "GameplayTagContainer.h"
#include "BSN_RemoveBuffOnUnit.generated.h"

class UCalliopeLevelSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class UBSN_RemoveBuffOnUnit : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakePlayerAsUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerRemoveEffect: 1;
    
    UBSN_RemoveBuffOnUnit();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotify(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
};
