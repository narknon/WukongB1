#include "BANS_GSSetCurveValueToMesh.h"

UBANS_GSSetCurveValueToMesh::UBANS_GSSetCurveValueToMesh() {
    this->TemporaryClose = false;
    this->NotApplyToChrMesh = false;
    this->BothWeapons = false;
    this->BothChildSkeltalMeshes = false;
    this->BothChildActor = false;
    this->NeedRecovery = false;
    this->bFitRealTime = false;
}

bool UBANS_GSSetCurveValueToMesh::FilterByRule(TArray<FString>& LogArr, USkeletalMesh* SKMesh, TArray<FName> WhiteParamNameList, bool& TotallyBelongToDBC) const {
    return false;
}

EGsEnAnimNS UBANS_GSSetCurveValueToMesh::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSSetCurveValueToMesh::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSetCurveValueToMesh::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


