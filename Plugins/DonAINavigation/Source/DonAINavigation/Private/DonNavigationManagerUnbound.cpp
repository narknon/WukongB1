#include "DonNavigationManagerUnbound.h"

ADonNavigationManagerUnbound::ADonNavigationManagerUnbound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUnbound = true;
    this->ObstacleQueryChannels.AddDefaulted(2);
    this->AutoCorrectionGuessList.AddDefaulted(11);
}


