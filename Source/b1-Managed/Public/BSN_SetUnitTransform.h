#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BSN_SetUnitTransform.generated.h"

class UCalliopeLevelSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class UBSN_SetUnitTransform : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakePlayerAsUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UBSN_SetUnitTransform();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotify(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
};

