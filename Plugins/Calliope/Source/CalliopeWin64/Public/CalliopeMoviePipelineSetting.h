#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "CalliopeMoviePipelineSetting.generated.h"

class AActor;
class UMoviePipeline;

UCLASS(Abstract, Blueprintable)
class CALLIOPEWIN64_API UCalliopeMoviePipelineSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UCalliopeMoviePipelineSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeardownForPipelineCS(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupForPipelineCS(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    void SequenceBindActorsByTag(UMoviePipeline* InPipeline, const TMap<FName, AActor*>& TagActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IgnoreTransientFiltersCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequenceBindingTags(UMoviePipeline* InPipeline, TSet<FName>& OutBindingTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterLevelSequenceActorInitializedCS(UMoviePipeline* InPipeline);
    
};

