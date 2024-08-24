#include "PCGComponent.h"
#include "PCGGraphInstance.h"

UPCGComponent::UPCGComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputType = EPCGComponentInput::Actor;
    this->bParseActorComponents = true;
    this->Seed = 42;
    this->bActivated = true;
    this->bIsComponentPartitioned = false;
    this->GenerationTrigger = EPCGComponentGenerationTrigger::GenerateOnLoad;
    this->bGenerated = false;
    this->bRuntimeGenerated = false;
    this->GraphInstance = CreateDefaultSubobject<UPCGGraphInstance>(TEXT("PCGGraphInstance"));
    this->GenerationGridSize = 409600;
    this->CachedPCGData = NULL;
    this->CachedInputData = NULL;
    this->CachedActorData = NULL;
    this->CachedLandscapeData = NULL;
    this->CachedLandscapeHeightData = NULL;
    this->bIsComponentLocal = false;
}

void UPCGComponent::SetGraph_Implementation(UPCGGraphInterface* InGraph) {
}

void UPCGComponent::NotifyPropertiesChangedFromBlueprint() {
}

FPCGDataCollection UPCGComponent::GetGeneratedGraphOutput() const {
    return FPCGDataCollection{};
}

void UPCGComponent::GenerateLocal(bool bForce) {
}

void UPCGComponent::Generate_Implementation(bool bForce) {
}

AActor* UPCGComponent::ClearPCGLink(UClass* TemplateActor) {
    return NULL;
}

void UPCGComponent::CleanupLocal(bool bRemoveComponents, bool bSave) {
}

void UPCGComponent::Cleanup_Implementation(bool bRemoveComponents, bool bSave) {
}

void UPCGComponent::AddToManagedResources(UPCGManagedResource* InResource) {
}


