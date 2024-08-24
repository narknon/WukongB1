#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeTemplateBase.h"
#include "MovieSceneCalliopeNormalTemplate.generated.h"

class UMovieSceneCalliopeNormalSection;

USTRUCT(BlueprintType)
struct FMovieSceneCalliopeNormalTemplate : public FMovieSceneCalliopeTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCalliopeNormalSection* Section;
    
    CALLIOPE_API FMovieSceneCalliopeNormalTemplate();
};

