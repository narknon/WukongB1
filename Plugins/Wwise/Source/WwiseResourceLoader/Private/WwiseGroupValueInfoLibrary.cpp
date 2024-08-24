#include "WwiseGroupValueInfoLibrary.h"

UWwiseGroupValueInfoLibrary::UWwiseGroupValueInfoLibrary() {
}

FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseShortId(const FWwiseGroupValueInfo& Ref, int32 WwiseShortId) {
    return FWwiseGroupValueInfo{};
}

FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseName(const FWwiseGroupValueInfo& Ref, const FString& WwiseName) {
    return FWwiseGroupValueInfo{};
}

FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetGroupShortId(const FWwiseGroupValueInfo& Ref, int32 GroupShortId) {
    return FWwiseGroupValueInfo{};
}

FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetAssetGuid(const FWwiseGroupValueInfo& Ref, const FGuid& AssetGuid) {
    return FWwiseGroupValueInfo{};
}

FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::MakeStruct(const FGuid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, const FString& WwiseName) {
    return FWwiseGroupValueInfo{};
}

int32 UWwiseGroupValueInfoLibrary::GetWwiseShortID(const FWwiseGroupValueInfo& Ref) {
    return 0;
}

FString UWwiseGroupValueInfoLibrary::GetWwiseName(const FWwiseGroupValueInfo& Ref) {
    return TEXT("");
}

int32 UWwiseGroupValueInfoLibrary::GetGroupShortId(const FWwiseGroupValueInfo& Ref) {
    return 0;
}

FGuid UWwiseGroupValueInfoLibrary::GetAssetGuid(const FWwiseGroupValueInfo& Ref) {
    return FGuid{};
}

void UWwiseGroupValueInfoLibrary::BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32& OutGroupShortId, int32& OutWwiseShortId, FString& OutWwiseName) {
}


