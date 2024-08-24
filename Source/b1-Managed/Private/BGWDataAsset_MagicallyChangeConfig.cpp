#include "BGWDataAsset_MagicallyChangeConfig.h"

UBGWDataAsset_MagicallyChangeConfig::UBGWDataAsset_MagicallyChangeConfig() {
    this->UnitScale = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->capsuleRadius = 0.00f;
    this->SKMesh = NULL;
    this->ABPClass = NULL;
    this->PhysicsAsset = NULL;
    this->Override_AbnormalDispID_Attacker = -1;
    this->Override_AbnormalDispID_Victim = -1;
}

void UBGWDataAsset_MagicallyChangeConfig::ReadConfigFromUnit(ABUTamerActor* Tamer) {
}


