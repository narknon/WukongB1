#pragma once
#include "CoreMinimal.h"
#include "BGWGameInstanceCS.h"
#include "BGW_GameInstance_B1.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBGW_GameInstance_B1 : public UBGWGameInstanceCS {
    GENERATED_BODY()
public:
    UBGW_GameInstance_B1();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessNianHuiLogic();
    
};

