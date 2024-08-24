#include "ActorCompContainer.h"

UActorCompContainer::UActorCompContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataContainer = NULL;
    this->EventCollection = NULL;
    this->TeamID = 0;
}

void UActorCompContainer::SetTeamID(int32 ID) {
}

void UActorCompContainer::FillEventCollection(UObject* DataObj) {
}

void UActorCompContainer::FillDataContainer(UActorDataContainer* DataObj) {
}


