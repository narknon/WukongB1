#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFrameMigration.h"
#include "MovieSceneSection.h"
#include "MovieSceneCalliopeSectionBase.generated.h"

UCLASS(Blueprintable)
class CALLIOPE_API UMovieSceneCalliopeSectionBase : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange PlaybackRange;
    
public:
    UMovieSceneCalliopeSectionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayName();
    
};

