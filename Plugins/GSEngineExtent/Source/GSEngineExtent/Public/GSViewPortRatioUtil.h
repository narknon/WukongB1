#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGSConstraintAspectRatioType.h"
#include "EGSForceRatioType.h"
#include "GSViewPortRatioUtil.generated.h"

class UObject;

UCLASS(Blueprintable)
class GSENGINEEXTENT_API UGSViewPortRatioUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSViewPortRatioUtil();

    UFUNCTION(BlueprintCallable)
    static void SetForceRatioType(EGSForceRatioType NewType);
    
    UFUNCTION(BlueprintCallable)
    static void InitSetCfg(float InCfgMaxRatioMin, float InCfgMaxRatioMax, float InCfgMinRatio, float InCfgRefHeightDPIScale);
    
    UFUNCTION(BlueprintCallable)
    static EGSForceRatioType GetForceRatioType();
    
    UFUNCTION(BlueprintCallable)
    static void CalcCameraRatioInnerWithRatioType(int32 RefViewPortWidth, int32 RefViewPortHeight, EGSForceRatioType InForceRatioType, float& TargetRatio, EGSConstraintAspectRatioType& ConstraintAspectRatioType);
    
    UFUNCTION(BlueprintCallable)
    static void CalcCameraRatioInner(int32 RefViewPortWidth, int32 RefViewPortHeight, float& TargetRatio, EGSConstraintAspectRatioType& ConstraintAspectRatioType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CalcCachedData(UObject* WorldContext, int32& OutRefViewPortWidth, int32& OutRefViewPortHeight, float& OutCfgMaxRatioMin, float& OutCfgMaxRatioMax, float& OutCfgMinRatio, float& OutCfgRefHeightDPIScale, EGSForceRatioType& OutForceRatioTye, EGSConstraintAspectRatioType& OutConstraintAspectRatioType, float& OutRatio);
    
};

