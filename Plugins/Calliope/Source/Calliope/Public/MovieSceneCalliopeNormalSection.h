#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeSectionBase.h"
#include "MovieSceneCalliopeNormalSection.generated.h"

class UMovieSceneCalliopeSectionData;

UCLASS(Abstract, Blueprintable)
class CALLIOPE_API UMovieSceneCalliopeNormalSection : public UMovieSceneCalliopeSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionNameForShow;
    
    UMovieSceneCalliopeNormalSection();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SectionBeingDestroyed(UMovieSceneCalliopeSectionData* InSectionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMovieSceneCalliopeSectionData* MakeSectionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovieMaxDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurationTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Evaluate(UMovieSceneCalliopeSectionData* InSectionData);
    
};

