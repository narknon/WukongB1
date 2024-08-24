#include "BGPPlayerState.h"
#include "Net/UnrealNetwork.h"

ABGPPlayerState::ABGPPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGPDataComp = NULL;
}



void ABGPPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGPPlayerState, ECSDataNetSerialization);
}


