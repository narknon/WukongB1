#include "BUAnimHumanoidCS_FlyControl.h"

UBUAnimHumanoidCS_FlyControl::UBUAnimHumanoidCS_FlyControl() {
    this->bUseComplexFlyControl = false;
    this->BSFly = NULL;
    this->BSFlyX = 0.00f;
    this->BSFlyY = 0.00f;
    this->ASFlyUpward = NULL;
    this->ASFlyDownward = NULL;
    this->ASFlyUpToDown = NULL;
    this->ASFlyDownToUp = NULL;
    this->BSFlyLean = NULL;
    this->BSFlyLeanX = 0.00f;
    this->BSFlyLeanY = 0.00f;
    this->bFlyUpToDown = false;
    this->bFlyDownToUp = false;
}


