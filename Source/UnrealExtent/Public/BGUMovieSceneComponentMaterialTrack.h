#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Tracks/MovieSceneMaterialTrack.h"
#include "BGUMovieSceneComponentMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBGUMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack/*, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    UBGUMovieSceneComponentMaterialTrack(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

