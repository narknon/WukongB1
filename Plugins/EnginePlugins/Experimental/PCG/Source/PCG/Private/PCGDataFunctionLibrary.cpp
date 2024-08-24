#include "PCGDataFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UPCGDataFunctionLibrary::UPCGDataFunctionLibrary() {
}

TArray<UPCGData*> UPCGDataFunctionLibrary::GetTypedInputsByTag(const FPCGDataCollection& InCollection, const FString& InTag, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass) {
    return TArray<UPCGData*>();
}

TArray<UPCGData*> UPCGDataFunctionLibrary::GetTypedInputsByPinLabel(const FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass) {
    return TArray<UPCGData*>();
}

TArray<UPCGData*> UPCGDataFunctionLibrary::GetTypedInputsByPin(const FPCGDataCollection& InCollection, const FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass) {
    return TArray<UPCGData*>();
}

TArray<UPCGData*> UPCGDataFunctionLibrary::GetTypedInputs(const FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass) {
    return TArray<UPCGData*>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetParamsByTag(const FPCGDataCollection& InCollection, const FString& InTag) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetParamsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetParams(const FPCGDataCollection& InCollection) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetInputsByTag(const FPCGDataCollection& InCollection, const FString& InTag) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetInputsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetInputs(const FPCGDataCollection& InCollection) {
    return TArray<FPCGTaggedData>();
}

TArray<FPCGTaggedData> UPCGDataFunctionLibrary::GetAllSettings(const FPCGDataCollection& InCollection) {
    return TArray<FPCGTaggedData>();
}

void UPCGDataFunctionLibrary::AddToCollection(FPCGDataCollection& InCollection, const UPCGData* InData, FName InPinLabel, TArray<FString> InTags) {
}


