#include "BGWDataAsset_PartBreakAMInfoConfig.h"

UBGWDataAsset_PartBreakAMInfoConfig::UBGWDataAsset_PartBreakAMInfoConfig() {
    this->EnableExtraAreaSelectType = false;
    this->SectorsType = NormalStiffSectorsType::AllForward;
    this->PBAS_ForwardLeft_FNB = 0.00f;
    this->PBAS_ForwardRight_FNB = 0.00f;
    this->PBAS_ForwardLeft_FourDir = 0.00f;
    this->PBAS_ForwardRight_FourDir = 0.00f;
    this->PBAS_BackwardLeft_FourDir = 0.00f;
    this->PBAS_BackwardRight_FourDir = 0.00f;
}


