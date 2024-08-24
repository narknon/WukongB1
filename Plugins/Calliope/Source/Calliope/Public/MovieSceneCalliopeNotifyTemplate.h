#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneCalliopeTemplateBase.h"
#include "MovieSceneCalliopeNotifyTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCalliopeNotifyTemplate : public FMovieSceneCalliopeTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventNames;
    
    CALLIOPE_API FMovieSceneCalliopeNotifyTemplate();
};

