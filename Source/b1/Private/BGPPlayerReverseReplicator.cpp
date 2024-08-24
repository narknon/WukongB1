#include "BGPPlayerReverseReplicator.h"
#include "Net/UnrealNetwork.h"

ABGPPlayerReverseReplicator::ABGPPlayerReverseReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerBGUChr = NULL;
}

void ABGPPlayerReverseReplicator::SetOwnerBGUChr(ABGUCharacter* BGUOwner) {
}

void ABGPPlayerReverseReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGPPlayerReverseReplicator, ECSDataNetSerialization);
}


