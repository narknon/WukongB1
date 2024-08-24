#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "CalliopeMovieSceneCameraCutTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UCalliopeMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UCalliopeMovieSceneCameraCutTrack();

};

