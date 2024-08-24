#include "BGUActorBaseCS.h"

ABGUActorBaseCS::ABGUActorBaseCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuidComp = NULL;
    this->SaveInitDataComp = NULL;
    this->ActorConfigInfoComp = NULL;
}

void ABGUActorBaseCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

bool ABGUActorBaseCS::GetActorGuidCS_Implementation(FString& OutActorGuid) const {
    return false;
}

void ABGUActorBaseCS::OnConstructionCS_Implementation(const FTransform& Transform) {
}


