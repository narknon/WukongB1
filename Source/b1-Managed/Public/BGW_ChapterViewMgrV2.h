#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_ChapterViewMgrV2.generated.h"

UCLASS(Blueprintable)
class UBGW_ChapterViewMgrV2 : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_ChapterViewMgrV2();

    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BeginStateName, FName EndStateName, bool IsForceImSet);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaveSeqFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceSeqFinished();
    
};

