#include "BGWGameState.h"
#include "Net/UnrealNetwork.h"

ABGWGameState::ABGWGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGSDataComp = NULL;
}











void ABGWGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGWGameState, ECSDataNetSerialization);
}


