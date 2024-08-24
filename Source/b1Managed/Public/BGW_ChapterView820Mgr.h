#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_ChapterView820Mgr.generated.h"

UCLASS(Blueprintable)
class UBGW_ChapterView820Mgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_ChapterView820Mgr();

    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BeginStateName, FName EndStateName, bool IsForceImSet);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaveSeqFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceSeqFinished();
    
};

