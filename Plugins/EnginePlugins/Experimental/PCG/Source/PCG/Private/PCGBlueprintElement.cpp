#include "PCGBlueprintElement.h"

UPCGBlueprintElement::UPCGBlueprintElement() {
    this->bIsCacheable = false;
    this->bComputeFullDataCrc = false;
    this->bCanBeMultithreaded = false;
    this->bHasDefaultInPin = true;
    this->bHasDefaultOutPin = true;
}


void UPCGBlueprintElement::VariableLoop(FPCGContext& InContext, const UPCGPointData* InData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const {
}


void UPCGBlueprintElement::PointLoop(FPCGContext& InContext, const UPCGPointData* InData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const {
}

EPCGSettingsType UPCGBlueprintElement::NodeTypeOverride_Implementation() const {
    return EPCGSettingsType::InputOutput;
}

FName UPCGBlueprintElement::NodeTitleOverride_Implementation() const {
    return NAME_None;
}

FLinearColor UPCGBlueprintElement::NodeColorOverride_Implementation() const {
    return FLinearColor{};
}


void UPCGBlueprintElement::NestedLoop(FPCGContext& InContext, const UPCGPointData* InOuterData, const UPCGPointData* InInnerData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const {
}


void UPCGBlueprintElement::IterationLoop(FPCGContext& InContext, int64 NumIterations, UPCGPointData*& OutData, const UPCGSpatialData* OptionalA, const UPCGSpatialData* OptionalB, UPCGPointData* OptionalOutData) const {
}

bool UPCGBlueprintElement::IsCacheableOverride_Implementation() const {
    return false;
}

int32 UPCGBlueprintElement::GetSeed(FPCGContext& InContext) const {
    return 0;
}

FRandomStream UPCGBlueprintElement::GetRandomStream(FPCGContext& InContext) const {
    return FRandomStream{};
}

TArray<FPCGPinProperties> UPCGBlueprintElement::GetOutputPins() const {
    return TArray<FPCGPinProperties>();
}

bool UPCGBlueprintElement::GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin) const {
    return false;
}

TArray<FPCGPinProperties> UPCGBlueprintElement::GetInputPins() const {
    return TArray<FPCGPinProperties>();
}

bool UPCGBlueprintElement::GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin) const {
    return false;
}

FPCGContext UPCGBlueprintElement::GetContext() const {
    return FPCGContext{};
}

void UPCGBlueprintElement::ExecuteWithContext_Implementation(FPCGContext& InContext, const FPCGDataCollection& Input, FPCGDataCollection& Output) {
}


TSet<FName> UPCGBlueprintElement::CustomOutputLabels() const {
    return TSet<FName>();
}

TSet<FName> UPCGBlueprintElement::CustomInputLabels() const {
    return TSet<FName>();
}



