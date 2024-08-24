#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_ExceptionUIMgr.generated.h"

class UBGW_ExceptionUIMgr;
class UObject;

UCLASS(Blueprintable)
class UBGW_ExceptionUIMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_ExceptionUIMgr();

    UFUNCTION(BlueprintCallable)
    static UBGW_ExceptionUIMgr* Get(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseExceptionUI();
    
};

