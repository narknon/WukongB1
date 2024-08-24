#include "BGWDataAsset_UnitDeathDispConfig.h"

UBGWDataAsset_UnitDeathDispConfig::UBGWDataAsset_UnitDeathDispConfig() {
    this->NormalDissolveDBC = NULL;
    this->DeathDissolvePlayType = DeathDissolvePlayType::DeadAMEnd;
    this->BurnStateDotDeadMontage = NULL;
    this->PoisonStateDotDeadMontage = NULL;
    this->FreezeStateDotDeadMontage = NULL;
    this->ImmobilizingDeadMontage = NULL;
    this->OceanSeaDeadMontage = NULL;
    this->InteractCricketDeadMontage = NULL;
    this->SuicideDeadMontage = NULL;
    this->AirDeadMontage_Fall = NULL;
    this->AirDeadMontage_WithDirection = NULL;
    this->FallDeadMontage = NULL;
}

void UBGWDataAsset_UnitDeathDispConfig::SetDefaultDBCAsset(UBUC_DispLibDispBaseConfigDataAsset* _NormalDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Burn_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Burn_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Thunder_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Thunder_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Poison_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Poison_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Freeze_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Freeze_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Yin_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Yin_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Yang_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Yang_AbnormalStateDissolveDBC) {
}


