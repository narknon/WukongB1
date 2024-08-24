#include "VATAnimMachineConfig.h"

FVATAnimMachineConfig::FVATAnimMachineConfig() {
    this->PlaySpeed = 0.00f;
    this->FrameRate = 0.00f;
    this->BlendRatio = 0.00f;
    this->Loop = false;
    this->ClipTexture = NULL;
    this->WindDirectionX = 0.00f;
    this->WindDirectionY = 0.00f;
    this->WindIntensity = 0.00f;
    this->IdleClip = 0;
}

