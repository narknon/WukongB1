#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeSectionBase.h"
#include "MovieSceneCalliopeNotifyStateSection.generated.h"

class UCalliopeLevelSequencePlayer;
class UObject;

UCLASS(Abstract, Blueprintable)
class CALLIOPE_API UMovieSceneCalliopeNotifyStateSection : public UMovieSceneCalliopeSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyStateNameForShow;
    
    UMovieSceneCalliopeNotifyStateSection();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotifyTick(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotifyEnd(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewNotifyBegin(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyTick(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurationTime();
    
};

