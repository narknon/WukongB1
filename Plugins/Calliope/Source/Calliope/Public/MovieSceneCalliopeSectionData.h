#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovieSceneFwd.h"
#include "CalliopeGuid.h"
#include "MovieSceneCalliopeSectionData.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class CALLIOPE_API UMovieSceneCalliopeSectionData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreview;
    
    UMovieSceneCalliopeSectionData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSilent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperandValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForwardPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasJumped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovieScenePlayerStatus::Type> GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequenceID() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetPlaybackContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCalliopeGuid GetObjectBindingID() const;
    
    UFUNCTION(BlueprintCallable)
    UCalliopeLevelSequencePlayer* GetCalliopePlayer();
    
};

