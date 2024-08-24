#include "AnimNotifyFuncLibrary.h"

UAnimNotifyFuncLibrary::UAnimNotifyFuncLibrary() {
}

void UAnimNotifyFuncLibrary::PrepareAnimNotifySoftAsset(UAnimSequenceBase* AnimBase, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs) {
}

void UAnimNotifyFuncLibrary::PrepareAnimationsNotifySoftAsset(TArray<UAnimSequenceBase*> AnimBases, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs) {
}

void UAnimNotifyFuncLibrary::GetAllAnimNotifySoftAsset(UAnimSequenceBase* AnimBase, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs) {
}

void UAnimNotifyFuncLibrary::DeleteAnimNotifyAndAnimNotifyState(UAnimMontage* AnimMontage, TArray<EGsEnAnimN> NotifyTypeList, TArray<EGsEnAnimNS> NotifyStateTypeList) {
}


