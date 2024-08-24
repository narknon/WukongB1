#include "BGWDataAsset_AnimationSyncStateConfig.h"

UBGWDataAsset_AnimationSyncStateConfig::UBGWDataAsset_AnimationSyncStateConfig() {
    this->PreState_bHostCantBeDead = false;
    this->PreState_bGuestCantBeDead = false;
    this->PreState_bIgnoreAllInput = false;
    this->InState_bHostCantBeDead = false;
    this->InState_bGuestCantBeDead = false;
    this->InState_bBothImmuneStiff = false;
    this->InState_bBothImmuneImmobilizing = false;
    this->InState_bHostImmuneFrozen = false;
    this->InState_bHostImmuneBurn = false;
    this->InState_bHostImmunePoison = false;
    this->InState_bHostImmuneThunder = false;
    this->InState_bGuestImmuneFrozen = false;
    this->InState_bGuestImmuneBurn = false;
    this->InState_bGuestImmunePoison = false;
    this->InState_bGuestImmuneThunder = false;
    this->InState_bHostImmuneDamage = false;
    this->InState_bHostImmuneDmgExceptElementDmg = false;
    this->bIgnoreAllInput = false;
}


