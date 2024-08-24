#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_CommLevelMgr.generated.h"

UCLASS(Blueprintable)
class UBGW_CommLevelMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_CommLevelMgr();

    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BeginStateName, FName EndStateName, bool IsForceImSet);
    
};

