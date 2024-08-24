#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequencePlayer.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "CalliopeLevelSequencePlayer.generated.h"

class ACalliopeLevelSequenceActor;
class UCalliopeLevelSequencePlayer;
class ULevelSequence;
class UMovieScene;
class UObject;

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovieInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeqJumpError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EventReceiver;
    
public:
    UCalliopeLevelSequencePlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetMarkedSecond(const FString& InFrameLabel, float& OutTimeSecond) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetMarkedFrameTime(const FString& InFrameLabel, FFrameTime& OutFrameTime) const;
    
    UFUNCTION(BlueprintCallable)
    void StopLooping();
    
    UFUNCTION(BlueprintCallable)
    void SetEventReceiver(UObject* InEventReceiver);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetPlaybackContext() const;
    
    UFUNCTION(BlueprintCallable)
    static void FixSectionData(const UMovieScene* InMovieScene);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCalliopeLevelSequencePlayer* CreateCalliopeLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, FLevelSequenceCameraSettings CameraSettings, ACalliopeLevelSequenceActor*& OutActor);
    
};

