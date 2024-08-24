#include "BUAnimHumanoidCS_MMRetarget.h"

UBUAnimHumanoidCS_MMRetarget::UBUAnimHumanoidCS_MMRetarget() {
    this->bCanRetarget = false;
    this->RetargetSrcMesh = NULL;
    this->BasePose = NULL;
    this->bNeedFixMM = false;
    this->MMAdditiveWeight = 0.00f;
    this->MMAdditivePose = NULL;
    this->Retargeter = NULL;
    this->MMRetarget_PelvisOffsetZ = 0.00f;
    this->MMRetarget_FootOffsetScale = 0.00f;
}


