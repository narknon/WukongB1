#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_CharacterViewMgr.generated.h"

UCLASS(Blueprintable)
class UBGW_CharacterViewMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_CharacterViewMgr();

    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BeginStateName, FName EndStateName, bool IsForceImSet);
    
};

