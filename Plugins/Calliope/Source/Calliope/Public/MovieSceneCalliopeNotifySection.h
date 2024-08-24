#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeSectionBase.h"
#include "MovieSceneCalliopeNotifySection.generated.h"

class UCalliopeLevelSequencePlayer;
class UObject;

UCLASS(Abstract, Blueprintable)
class CALLIOPE_API UMovieSceneCalliopeNotifySection : public UMovieSceneCalliopeSectionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyNameForShow;
    
public:
    UMovieSceneCalliopeNotifySection();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotify(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurationTime();
    
};

