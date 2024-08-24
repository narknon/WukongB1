#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeTemplateBase.h"
#include "MovieSceneCalliopeNotifyStateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCalliopeNotifyStateTemplate : public FMovieSceneCalliopeTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    CALLIOPE_API FMovieSceneCalliopeNotifyStateTemplate();
};

