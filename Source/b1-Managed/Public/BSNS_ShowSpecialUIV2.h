#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCalliopeNotifyStateSection.h"
#include "EUIPageType.h"
#include "EndingCreditsAction.h"
#include "BSNS_ShowSpecialUIV2.generated.h"

class UCalliopeLevelSequencePlayer;

UCLASS(Blueprintable)
class UBSNS_ShowSpecialUIV2 : public UMovieSceneCalliopeNotifyStateSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIPageType UIPageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MediaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EndingCreditsAction OpenEndingCredits;
    
    UBSNS_ShowSpecialUIV2();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayName();
    
};

