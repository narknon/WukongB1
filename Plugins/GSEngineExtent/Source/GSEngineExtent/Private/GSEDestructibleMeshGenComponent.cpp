#include "GSEDestructibleMeshGenComponent.h"

UGSEDestructibleMeshGenComponent::UGSEDestructibleMeshGenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetBlueprint = NULL;
    this->bUseCustomCollisionToDefault = false;
    this->bRefreshPriviewObjectsOnAnimalMesh = false;
    this->FloatCurve = NULL;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionResponseToChannelByName(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse, const FString& Name) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse, UDestructibleComponent* Comp) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionResponseToAllChannelsByName(TEnumAsByte<ECollisionResponse> NewResponse, const FString& Name) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse, UDestructibleComponent* Comp) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionObjectTypeByName(TEnumAsByte<ECollisionChannel> Channel, const FString& Name) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel, UDestructibleComponent* Comp) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionEnabledForceByName(TEnumAsByte<ECollisionEnabled::Type> NewType, const FString& Name) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetCollisionEnabledForce(TEnumAsByte<ECollisionEnabled::Type> NewType, UDestructibleComponent* Comp) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetAllCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetAllCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetAllCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::SetAllCollisionEnabledForce(TEnumAsByte<ECollisionEnabled::Type> NewType) {
    return false;
}

bool UGSEDestructibleMeshGenComponent::CallFloatCurve() {
    return false;
}


