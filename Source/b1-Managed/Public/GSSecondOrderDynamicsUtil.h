#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSSecondOrderDynamicsUtil.generated.h"

UCLASS(Blueprintable)
class UGSSecondOrderDynamicsUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSSecondOrderDynamicsUtil();

    UFUNCTION(BlueprintCallable)
    static void InitCurSecOrdDyn(float F, float Z, float R, float X0);
    
    UFUNCTION(BlueprintCallable)
    static float CurSecOrdDynUpdate(float T, float X, float XD);
    
};

