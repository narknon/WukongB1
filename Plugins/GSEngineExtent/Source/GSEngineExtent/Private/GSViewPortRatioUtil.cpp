#include "GSViewPortRatioUtil.h"

UGSViewPortRatioUtil::UGSViewPortRatioUtil() {
}

void UGSViewPortRatioUtil::SetForceRatioType(EGSForceRatioType NewType) {
}

void UGSViewPortRatioUtil::InitSetCfg(float InCfgMaxRatioMin, float InCfgMaxRatioMax, float InCfgMinRatio, float InCfgRefHeightDPIScale) {
}

EGSForceRatioType UGSViewPortRatioUtil::GetForceRatioType() {
    return EGSForceRatioType::Auto;
}

void UGSViewPortRatioUtil::CalcCameraRatioInnerWithRatioType(int32 RefViewPortWidth, int32 RefViewPortHeight, EGSForceRatioType InForceRatioType, float& TargetRatio, EGSConstraintAspectRatioType& ConstraintAspectRatioType) {
}

void UGSViewPortRatioUtil::CalcCameraRatioInner(int32 RefViewPortWidth, int32 RefViewPortHeight, float& TargetRatio, EGSConstraintAspectRatioType& ConstraintAspectRatioType) {
}

void UGSViewPortRatioUtil::CalcCachedData(UObject* WorldContext, int32& OutRefViewPortWidth, int32& OutRefViewPortHeight, float& OutCfgMaxRatioMin, float& OutCfgMaxRatioMax, float& OutCfgMinRatio, float& OutCfgRefHeightDPIScale, EGSForceRatioType& OutForceRatioTye, EGSConstraintAspectRatioType& OutConstraintAspectRatioType, float& OutRatio) {
}


