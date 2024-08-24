#include "AnimNotifyState_GSLockHandFoot.h"
#include "EGsEnAnimNS.h"

UAnimNotifyState_GSLockHandFoot::UAnimNotifyState_GSLockHandFoot() {
    this->AnimNSType = EGsEnAnimNS::HandAndFootLock;
    this->NeedLockType = EBUHandFootType::None;
    this->BeginReduceScale = 0.00f;
}


