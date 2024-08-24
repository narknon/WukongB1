#include "WwiseObjectInfoLibrary.h"

UWwiseObjectInfoLibrary::UWwiseObjectInfoLibrary() {
}

FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseShortId(const FWwiseObjectInfo& Ref, int32 WwiseShortId) {
    return FWwiseObjectInfo{};
}

FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseName(const FWwiseObjectInfo& Ref, const FString& WwiseName) {
    return FWwiseObjectInfo{};
}

FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseGuid(const FWwiseObjectInfo& Ref, const FGuid& WwiseGuid) {
    return FWwiseObjectInfo{};
}

FWwiseObjectInfo UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId) {
    return FWwiseObjectInfo{};
}

FWwiseObjectInfo UWwiseObjectInfoLibrary::MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, int32 HardCodedSoundBankShortId) {
    return FWwiseObjectInfo{};
}

int32 UWwiseObjectInfoLibrary::GetWwiseShortID(const FWwiseObjectInfo& Ref) {
    return 0;
}

FString UWwiseObjectInfoLibrary::GetWwiseName(const FWwiseObjectInfo& Ref) {
    return TEXT("");
}

FGuid UWwiseObjectInfoLibrary::GetWwiseGuid(const FWwiseObjectInfo& Ref) {
    return FGuid{};
}

int32 UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref) {
    return 0;
}

void UWwiseObjectInfoLibrary::BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, int32& OutHardCodedSoundBankShortId) {
}


