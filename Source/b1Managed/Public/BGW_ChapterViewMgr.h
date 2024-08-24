#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_ChapterViewMgr.generated.h"

UCLASS(Blueprintable)
class UBGW_ChapterViewMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_ChapterViewMgr();

    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BeginStateName, FName EndStateName, bool IsForceImSet);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaveSeqFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnChapterSeqFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceSeqFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSurpriseSeqFinished();
    
};

