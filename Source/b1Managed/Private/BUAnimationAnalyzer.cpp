#include "BUAnimationAnalyzer.h"

UBUAnimationAnalyzer::UBUAnimationAnalyzer() {
    this->bUsingAssetSoftRef = true;
}

UBUAnimationAnalyzer* UBUAnimationAnalyzer::GenerateNewAACSAsset(UAnimationAnalyzer* OrgAA) {
    return NULL;
}

bool UBUAnimationAnalyzer::FindABPSettingSameToAA(UBGWDataAsset_AbpHumanoidSetting* ABP_Setting, const FString& OrgAAPackageName) {
    return false;
}

bool UBUAnimationAnalyzer::AddToABPSettingSameToAA(UBGWDataAsset_AbpHumanoidSetting* ABP_Setting, const FString& OrgAAPackageName) {
    return false;
}

void UBUAnimationAnalyzer::MMAnimationSeqUsingNotify_Inner_Implementation(int32 Ref, AActor* Owner) {
}

bool UBUAnimationAnalyzer::CheckIsFirstLoadRequireDesireAsset_Implementation(int32 Ref) {
    return false;
}

int32 UBUAnimationAnalyzer::RequireAnimationsLoadAtDesiredReferences_Implementation(int32 Ref, bool bLoadAll, UObject* Obj) {
    return 0;
}


