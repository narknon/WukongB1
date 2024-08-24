#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifySection.h"
#include "BSN_MediaCache.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSN_MediaCache : public UMovieSceneCalliopeNotifySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MediaId;
    
    UBSN_MediaCache();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayName();
    
};

