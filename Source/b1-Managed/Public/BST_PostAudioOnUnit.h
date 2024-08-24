#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNormalSection.h"
#include "GameplayTagContainer.h"
#include "BST_PostAudioOnUnit.generated.h"

class UAkAudioEvent;
class UMovieSceneCalliopeSectionData;

UCLASS(Blueprintable)
class UBST_PostAudioOnUnit : public UMovieSceneCalliopeNormalSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakePlayerAsUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnitGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRetriggerEvent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrubTailLengthMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopAtSectionEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PostOnDummyObj: 1;
    
    UBST_PostAudioOnUnit();

    UFUNCTION(BlueprintCallable)
    void SetEvent_Editor(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Evaluate(UMovieSceneCalliopeSectionData* InSectionData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurationTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMovieSceneCalliopeSectionData* MakeSectionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SectionBeingDestroyed(UMovieSceneCalliopeSectionData* InSectionData) const;
    
};

