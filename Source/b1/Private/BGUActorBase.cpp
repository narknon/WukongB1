#include "BGUActorBase.h"
#include "Net/UnrealNetwork.h"

ABGUActorBase::ABGUActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBeginPlayFromLevelStreaming = false;
    this->ActorCompContainer = NULL;
    this->EventCollection = NULL;
    this->bIsFullyInit = false;
}

void ABGUActorBase::SetTeamID(int32 ID) {
}

void ABGUActorBase::SetRootComponentCS(USceneComponent* NewRootComponent) {
}

void ABGUActorBase::SetCompCanEverAffectNavigation(UActorComponent* ActorComponent, bool bRelevant) {
}






int32 ABGUActorBase::GetTeamID() const {
    return 0;
}

UBUS_EventCollection* ABGUActorBase::GetBUSEventCollection() {
    return NULL;
}


bool ABGUActorBase::GetActorGuid(FString& OutActorGuid) const {
    return false;
}

void ABGUActorBase::FullyInit() {
}

void ABGUActorBase::ForceRefreshDetailView() {
}


void ABGUActorBase::AttachBaseActorComp(UBaseActorComp* Comp) {
}


void ABGUActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGUActorBase, ECSDataNetSerialization);
}


